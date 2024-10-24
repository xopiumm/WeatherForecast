#pragma once

#include <cpr/cpr.h>
#include <fstream>
#include <map>
#include <ncurses.h>
#include <nlohmann/json.hpp>
#include <system_error>

#ifdef border
#undef border
#endif

#include "forecast.h"
#include "interface.h"

class Handler {
private:
    std::string config_file_;

    int city_code_;
    int days_amount_;
    int frequency_;

    std::vector<Day> days_;
    std::vector<Forecast*> forecasts_;

    void GetForecast(const City& city);
    void ParseWeatherInfo(const nlohmann::json& info);
    void GetCoordinates(const std::string& city_name);
    void ParseKeys();
    void UpdateInfo();
    void CheckInternetConnection();

public:
    Handler(std::string& config);
    ~Handler();

    static const int kMaxDays = 15;
    static const int kMinDays = 1;
    static const int kHours = 24;
    static std::map<int, std::string> weather_codes;

    void RunApp();
};
