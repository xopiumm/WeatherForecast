#pragma once

#include <iostream>
#include <string>
#include <vector>

struct Time {
    std::string time;
    std::string description;
    int weather_code;
    double temperature;
    int wind_speed;
    double precipitation_amount;
};

struct Day {
    std::string day;
    Time current;
    std::vector<Time> times;
};

struct City {
    unsigned long status;
    std::string city_name;
    double latitude;
    double longitude;
};

class Forecast {
private:
    City city_;
    int days_amount_;
    std::vector<Day> days_;

public:
    Forecast(const City& city, const std::vector<Day>& days);
    ~Forecast() = default;

    City& GetCity();
    int GetDaysAmount();
    Day& GetDay(int day_number);
    void SetDaysAmount(int days_amount);
};
