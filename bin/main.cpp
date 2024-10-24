#include "lib/handler.h"


int main() {
    std::string config = "config.json";

    Handler weather_forecast (config);
    weather_forecast.RunApp();

    return 0;
}
