#pragma once

#include <ftxui/component/event.hpp>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/box.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>
#include <ftxui/screen/terminal.hpp>

#ifdef border
#undef border
#endif

#include <map>
#include <ncurses.h>

#include "forecast.h"

class Interface {
private:
    ftxui::Element PrintTime(Forecast* forecast, int day_number, int time);
    ftxui::Element PrintCurrent(Time current);
    static ftxui::Element PrintPicture(int weather_code);
    static ftxui::Element PrintLogo();

public:
    static std::map<int, std::string> weather_codes;
    explicit Interface() = default;

    void Print(Forecast* forecast);
};
