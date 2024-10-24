#include "forecast.h"

Forecast::Forecast(const City& city, const std::vector<Day>& days) : city_(city), days_(days) {}

City& Forecast::GetCity() {
    return city_;
}

int Forecast::GetDaysAmount() {
    return days_amount_;
}

Day& Forecast::GetDay(int day_number) {
    return days_[day_number];
}

void Forecast::SetDaysAmount(int days_amount) {
    days_amount_ = days_amount;
}
