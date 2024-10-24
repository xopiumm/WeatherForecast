#include "handler.h"

Handler::Handler(std::string& config) {
    config_file_ = config;
    city_code_ = 0;
    days_amount_ = kMaxDays;
    frequency_ = 100'000'000;
}

Handler::~Handler() {
    for (int i = 0; i < forecasts_.size(); ++i) {
        delete forecasts_[i];
    }
}

void Handler::GetForecast(const City& city) {
    if (city.status == 200) {
        cpr::Response response = cpr::Get(cpr::Url("https://api.open-meteo.com/v1/forecast"),
                                          cpr::Parameters{
                                                  {"latitude", std::to_string(city.latitude)},
                                                  {"longitude", std::to_string(city.longitude)},
                                                  {"hourly", "weather_code"},
                                                  {"hourly", "temperature_2m"},
                                                  {"hourly", "wind_speed_10m"},
                                                  {"hourly", "precipitation"},
                                                  {"current", "weather_code"},
                                                  {"current", "temperature_2m"},
                                                  {"current", "wind_speed_10m"},
                                                  {"current", "precipitation"},
                                                  {"forecast_days", "16"}});
        nlohmann::json info = nlohmann::json::parse(response.text);
        ParseWeatherInfo(info);
    }

    Forecast* forecast = new Forecast (city, days_);
    days_.clear();
    forecast->SetDaysAmount(days_amount_);
    forecasts_.push_back(forecast);
}

void Handler::ParseWeatherInfo(const nlohmann::json& info) {
    std::vector<Time> times;
    int counter = 0;
    for (int i = 2; i < kMaxDays * kHours; i += 6) {
        Time time;

        switch (counter) {
            case 0:
                time.time = "Night";
                break;
            case 1:
                time.time = "Morning";
                break;
            case 2:
                time.time = "Afternoon";
                break;
            case 3:
                time.time = "Evening";
                break;
            default:
                time.time = "Out Of Range";
                break;
        }

        time.weather_code = info["hourly"]["weather_code"][i];
        time.description = Interface::weather_codes[time.weather_code];
        time.temperature = info["hourly"]["temperature_2m"][i];
        time.wind_speed = info["hourly"]["wind_speed_10m"][i];
        time.precipitation_amount = info["hourly"]["precipitation"][i];

        times.push_back(time);
        ++counter;

        if (counter == 4) {
            Day day;
            day.day = info["hourly"]["time"][i];
            day.times = times;
            day.current.time = "Current Weather";
            day.current.weather_code = info["current"]["weather_code"];
            day.current.description = Interface::weather_codes[day.current.weather_code];
            day.current.temperature = info["current"]["temperature_2m"];
            day.current.wind_speed = info["current"]["wind_speed_10m"];
            day.current.precipitation_amount = info["current"]["precipitation"];

            times.clear();
            counter = 0;

            days_.push_back(day);
        }
    }
}

void Handler::GetCoordinates(const std::string& city_name) {
    City city;

    cpr::Response responce = cpr::Get(cpr::Url{"https://api.api-ninjas.com/v1/city"},
                                      cpr::Parameters{{"name", city_name}},
                                      cpr::Header{{"X-api-key", "some_api"}});
    if (responce.status_code == 200) {
        nlohmann::json info = nlohmann::json::parse(responce.text);

        city.status = responce.status_code;
        city.latitude = info[0]["latitude"];
        city.longitude = info[0]["longitude"];
        city.city_name = city_name;

    } else {
        city.status = responce.status_code;
        city.latitude = 0;
        city.longitude = 0;
        city.city_name = "not_found";
    }

    GetForecast(city);
}

void Handler::ParseKeys() {
    Interface interface;

    cbreak();
    keypad(stdscr, TRUE);

    int key = getch();

    if (key == 27) {
        endwin();
        exit(0);
    }

    if (key == '-' && days_amount_ > kMinDays) {
        --days_amount_;

        for (int i = 0; i < forecasts_.size(); ++i) {
            forecasts_[i]->SetDaysAmount(days_amount_);
        }
        clear();
        refresh();
        interface.Print(forecasts_[city_code_]);
    }

    if (key == '=' && days_amount_ < kMaxDays) {
        ++days_amount_;

        for (int i = 0; i < forecasts_.size(); ++i) {
            forecasts_[i]->SetDaysAmount(days_amount_);
        }
        clear();
        refresh();
        interface.Print(forecasts_[city_code_]);
    }

    if ((key == 'p' || key == KEY_LEFT) && city_code_ > 0) {
        --city_code_;
        clear();
        refresh();
        interface.Print(forecasts_[city_code_]);
    }

    if ((key == 'n' || key == KEY_RIGHT) && city_code_ < forecasts_.size() - 1) {
        ++city_code_;
        clear();
        refresh();
        interface.Print(forecasts_[city_code_]);
    }

    if (key == 32) {
        interface.Print(forecasts_[city_code_]);
    }

    if (key == 'r'){
        CheckInternetConnection();
    }
}

void Handler::UpdateInfo() {
    Interface interface;
    initscr();
    std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
    interface.Print(forecasts_[city_code_]);

    while (true) {
        CheckInternetConnection();
        std::chrono::system_clock::time_point end = std::chrono::system_clock::now();
        if (std::chrono::duration_cast<std::chrono::seconds>(end - start).count() >=
            frequency_) {
            clear();
            refresh();
            RunApp();
        }
        ParseKeys();
    }
}

void Handler::RunApp() {
    nlohmann::json config = nlohmann::json::parse(std::ifstream(config_file_));

    frequency_ = config["frequency"];
    days_amount_ = config["days_amount"];

    CheckInternetConnection();

    for (int i = 0; i < config["cities_amount"]; ++i) {
        GetCoordinates(config["cities"][i]);
    }

    UpdateInfo();
}

void Handler::CheckInternetConnection() {
    if (std::system("ping -c 4 google.com > /dev/null 2>&1") != 0) {
        ftxui::Element error = ftxui::hbox(ftxui::text("No Internet Connection, Try Again in 30 seconds :((")
                | ftxui::color(ftxui::Color::Red));
        auto screen = ftxui::Screen::Create(ftxui::Dimension::Fit(error), ftxui::Dimension::Fit(error));

        Render(screen, error);
        screen.Print();

        std::chrono::system_clock::time_point start = std::chrono::system_clock::now();

        while (true) {
            std::chrono::system_clock::time_point end = std::chrono::system_clock::now();

            if (std::chrono::duration_cast<std::chrono::seconds>(end - start).count() >= 30) {
                clear();
                refresh();
                RunApp();
            }
            ParseKeys();
        }
    }
}
