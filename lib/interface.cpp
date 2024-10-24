#include "interface.h"

std::map<int, std::string> Interface::weather_codes = {
        {0, "Clear sky"},
        {1, "Mainly clear"},
        {2, "Partly cloudy"},
        {3, "Overcast"},
        {45, "Fog"},
        {48, "Depositing rime fog"},
        {51, "Light drizzle"},
        {53, "Moderate drizzle"},
        {55, "Dense drizzle"},
        {56, "Light freezing drizzle"},
        {57, "Dense freezing drizzle"},
        {61, "Slight rain"},
        {63, "Moderate rain"},
        {65, "Heavy rain"},
        {66, "Light freezing rain"},
        {67, "Heavy freezing rain"},
        {71, "Slight snow fall"},
        {73, "Moderate snow fall"},
        {75, "Heavy snow fall"},
        {77, "Snow grains"},
        {80, "Slight rain showers"},
        {81, "Moderate rain showers"},
        {82, "Violent rain showers"},
        {85, "Slight snow showers"},
        {86, "Heavy snow showers"},
        {95, "Thunderstorm"},
        {96, "Thunderstorm with slight hail"},
        {99, "Thunderstorm with heavy hail"}
};

ftxui::Element Interface::PrintPicture(int weather_code) {
    ftxui::Elements elements;
    switch (weather_code) {
        case 0:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[0])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("           \\  |  /           ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("              __              ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          —  (  )  —          ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("              ‘‘              ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("           /  |  \\           ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("                              ")) | ftxui::flex);
            break;
        case 1:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[1])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("           \\  |  /           ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("              __ __           ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          —  (__(  )_         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("            _(  ( )  )__      ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("           (_______)____)     ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("                              ")) | ftxui::flex);
            break;
        case 2:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[2])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("           \\  |  /           ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("              __    ____      ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("         - __(__) _(    )__   ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        __(     )(_    )   )  ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("      _(      (    )___)____) ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("     (___(_______)__)         ")) | ftxui::flex);
            break;
        case 3:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[3])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("                   ____       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          _____  _(    )__    ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       __(     )(_    )   )   ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("     _(      (    )___)____)  ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("    (___(_______)__)          ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("                              ")) | ftxui::flex);
            break;
        case 45:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[45])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("  ~ ~ ~   ~ ~   ~ ~   ~ ~     ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("   ~ ~   ~ ~   ~ ~   ~ ~ ~    ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("    ~ ~ ~   ~ ~   ~ ~   ~ ~   ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("     ~ ~   ~ ~   ~ ~   ~ ~ ~  ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("      ~ ~ ~   ~ ~   ~ ~   ~ ~ ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("                              ")) | ftxui::flex);
            break;
        case 48:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[48])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("  ~ ~ *   ~ *   ~ *   ~ *     ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("   * ~   * ~   * ~   * ~ ~    ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("    ~ ~ *   ~ *   ~ *   ~ *   ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("     * ~   * ~   * ~   * ~ ~  ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("      * ~ *   ~ *   ~ *   ~ * ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("                              ")) | ftxui::flex);
            break;
        case 51:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[51])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       ,    ,    ,    ,       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          ,    ,    ,         ")) | ftxui::flex);
            break;
        case 53:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[53])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        ,   ,  ,   ,  ,       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          ,  ,   ,  ,         ")) | ftxui::flex);
            break;
        case 55:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[55])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        , , , , , , , ,       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("         , , , , , , ,        ")) | ftxui::flex);
            break;
        case 56:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[56])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       ,    *    ,    *       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          ,    *    ,         ")) | ftxui::flex);
            break;
        case 57:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[57])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        , * , * , * , *       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("         , * , * , * ,        ")) | ftxui::flex);
            break;
        case 61:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[61])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        /   /   /   /         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("         /   /   /            ")) | ftxui::flex);
            break;
        case 63:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[63])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        /  /  /  /  /         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("         /  /  /  /           ")) | ftxui::flex);
            break;
        case 65:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[65])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       / / / / / / / /        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       / / / / / / / /        ")) | ftxui::flex);
            break;
        case 66:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[66])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        /   *   /   *         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          *   /   *           ")) | ftxui::flex);
            break;
        case 67:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[67])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       / * / * / * / *        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       * / * / * / * /        ")) | ftxui::flex);
            break;
        case 71:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[71])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       *    *    *    *       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          *    *    *         ")) | ftxui::flex);
            break;
        case 73:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[73])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       *   *   *   *  *       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("         *   *   *   *        ")) | ftxui::flex);
            break;
        case 75:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[75])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        * * * * * * * *       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("         * * * * * * *        ")) | ftxui::flex);
            break;
        case 77:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[77])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       ◦   ◦   ◦   ◦  ◦       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("         ◦   ◦   ◦   ◦        ")) | ftxui::flex);
            break;
        case 80:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[80])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       |    |    |    |       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          |    |    |         ")) | ftxui::flex);
            break;
        case 81:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[81])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        |  |  |  |  |         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          |  |  |  |          ")) | ftxui::flex);
            break;
        case 82:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[82])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        | | | | | | | |       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("         | | | | | | |        ")) | ftxui::flex);
            break;
        case 85:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[85])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       *,   *,   *,   *,      ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          *,   *,   *,        ")) | ftxui::flex);
            break;
        case 86:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[86])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       *, *, *, *, *, *,      ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("         *, *, *, *, *,       ")) | ftxui::flex);
            break;
        case 95:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[95])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("              //              ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("              \\              ")) | ftxui::flex);
            break;
        case 96:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[96])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        |  |  //  |  |        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("         |  | \\   |          ")) | ftxui::flex);
            break;
        case 99:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text(weather_codes[99])) | ftxui::center | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("             _____            ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("          __(     )__         ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        _(      (    )        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("       (___(_______)__)       ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("        | | | // | | |        ")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("         | | |\\| | |         ")) | ftxui::flex);
            break;
        default:
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("..............................")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("..............................")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("..............................")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("..............................")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("..............................")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("..............................")) | ftxui::flex);
            elements.push_back(color(ftxui::Color::Pink1, ftxui::text("..............................")) | ftxui::flex);
            break;
    }
    return ftxui::vbox(elements) | ftxui::size(ftxui::HEIGHT, ftxui::GREATER_THAN, 7) |
                                    ftxui::size(ftxui::WIDTH,ftxui::GREATER_THAN, 30);
}


ftxui::Element Interface::PrintTime(Forecast* forecast, int day_number, int time) {
    ftxui::Elements elements;
    ftxui::Elements picture;

    picture.push_back(PrintPicture(forecast->GetDay(day_number).times[time].weather_code) |
                        ftxui::size(ftxui::WIDTH, ftxui::LESS_THAN, 30));

    elements.push_back(ftxui::text(""));
    elements.push_back(ftxui::text(forecast->GetDay(day_number).times[time].time) | ftxui::flex | ftxui::center |
                        ftxui::color(ftxui::Color::Pink1));
    elements.push_back(ftxui::text("- - - - - -") | ftxui::flex | ftxui::center);
    elements.push_back(ftxui::text((std::to_string(forecast->GetDay(day_number).times[time].temperature)[0] != '-' ?
                     " +" + std::to_string(forecast->GetDay(day_number).times[time].temperature).substr(0,
                            std::to_string(forecast->GetDay(day_number).times[time].temperature).find_last_of('.') + 2) :
                     ' ' + std::to_string(forecast->GetDay(day_number).times[time].temperature).substr(0,
                           std::to_string(forecast->GetDay(day_number).times[time].temperature).find_last_of('.') + 2))) |
                     ftxui::flex | ftxui::center),
                     elements.push_back(ftxui::text("💨:" +
                                std::to_string(forecast->GetDay(day_number).times[time].wind_speed) + "km/h") |
                                ftxui::flex | ftxui::center),
                    elements.push_back(ftxui::text("💧:" +
                                std::to_string(forecast->GetDay(day_number).times[time].precipitation_amount).substr(0, 4) +
                                "mm") | ftxui::flex | ftxui::center);

    return ftxui::hbox(ftxui::vbox(picture) | ftxui::size(ftxui::WIDTH, ftxui::GREATER_THAN, 30),
                       ftxui::separator(), ftxui::vbox(elements) | ftxui::size(ftxui::WIDTH, ftxui::LESS_THAN, 15));

}

ftxui::Element Interface::PrintLogo() {
    ftxui::Elements elements;

    elements.push_back(color(ftxui::Color::Pink1, ftxui::text("                      .--.      .--.    .-''-.     ____ "
                                                              "  ,---------. .---.  .---.     .-''-.  .-------.        "
                                                              "              ")) | ftxui::flex);
    elements.push_back(color(ftxui::Color::Pink1, ftxui::text("                      |  |_     |  |  .'_ _   \\  .'  __"
                                                              " `.\\          \\|   |  |_ _|   .'_ _   \\ |  _ _   \\  "
                                                              "                        ")) | ftxui::flex);
    elements.push_back(color(ftxui::Color::Pink1, ftxui::text("                      | _( )_   |  | / ( ` )   '/   '  \\"
                                                              "  \\`--.  ,---'|   |  ( ' )  / ( ` )   '| ( ' )  |      "
                                                              "                    ")) | ftxui::flex);
    elements.push_back(color(ftxui::Color::Pink1, ftxui::text("                      |(_ o _)  |  |. (_ o _)  ||___|  /"
                                                              "  |   |   \\   |   '-(_{;}_). (_ o _)  ||(_ o _) /      "
                                                              "                    ")) | ftxui::flex);
    elements.push_back(color(ftxui::Color::Pink1, ftxui::text("                      | (_,_) \\ |  ||  (_,_)___|   _.-`"
                                                              "   |   :_ _:   |      (_,_) |  (_,_)___|| (_,_).' __    "
                                                              "                    ")) | ftxui::flex);
    elements.push_back(color(ftxui::Color::Pink1, ftxui::text("                      |  |/    \\|  |'  \\   .---..'   _"
                                                              "    |   (_I_)   | _ _--.   | '  \\   .---.|  |\\ \\  |  "
                                                              "|                       ")) | ftxui::flex);
    elements.push_back(color(ftxui::Color::Pink1, ftxui::text("                      |  '  /\\  `  | \\  `-'    /|  _( "
                                                              ")_  |  (_(=)_)  |( ' ) |   |  \\  `-'    /|  | \\ `'   /"
                                                              "                       ")) | ftxui::flex);
    elements.push_back(color(ftxui::Color::Pink1, ftxui::text("                      |    /  \\    |  \\       / \\ (_ "
                                                              "o _) /   (_I_)   (_{;}_)|   |   \\       / |  |  \\    /"
                                                              "                        ")) | ftxui::flex);
    elements.push_back(color(ftxui::Color::Pink1, ftxui::text("                      `---'    `---`   `'-..-'   '.(_,_)"
                                                              ".'    '---'   '(_,_) '---'    `'-..-'  ''-'   `'-'      "
                                                              "                   ")) | ftxui::flex);

    return ftxui::vbox(elements);
}

ftxui::Element Interface::PrintCurrent(Time current) {
    ftxui::Elements elements;
    ftxui::Elements picture;

    picture.push_back(PrintPicture(current.weather_code) |
                      ftxui::size(ftxui::WIDTH, ftxui::LESS_THAN, 30));

    elements.push_back(ftxui::text(""));
    elements.push_back(ftxui::text(current.time) | ftxui::flex | ftxui::center |
                       ftxui::color(ftxui::Color::Pink1));
    elements.push_back(ftxui::text("- - - - - - - - - -") | ftxui::flex | ftxui::center);
    elements.push_back(ftxui::text((std::to_string(current.temperature)[0] != '-' ? "+" +
                                    std::to_string(current.temperature).substr(0,
                                    std::to_string(current.temperature).find_last_of('.') + 2) :
                                    ' ' + std::to_string(current.temperature).substr(0,
                                    std::to_string(current.temperature).find_last_of('.') + 2))) |
                                    ftxui::flex | ftxui::center),
            elements.push_back(ftxui::text("💨:" +
                                           std::to_string(current.wind_speed) + "km/h") |
                                           ftxui::flex | ftxui::center),
            elements.push_back(ftxui::text("💧:" +
                                           std::to_string(current.precipitation_amount).substr(0, 4) +
                                           "mm") | ftxui::flex | ftxui::center);

    return ftxui::hbox(ftxui::vbox(picture) | ftxui::size(ftxui::WIDTH, ftxui::GREATER_THAN, 30),
                       ftxui::separator(), ftxui::vbox(elements) | ftxui::size(ftxui::WIDTH, ftxui::GREATER_THAN, 20),
                       ftxui::separator() ,PrintLogo()) | ftxui::size(ftxui::WIDTH, ftxui::GREATER_THAN, 119);

}

void Interface::Print(Forecast* forecast) {
    clear();
    refresh();

    auto data_1 = ftxui::window(
            ftxui::text(forecast->GetCity().city_name) | ftxui::center | ftxui::flex,
            ftxui::hbox({PrintCurrent(forecast->GetDay(0).current) | ftxui::size(ftxui::WIDTH, ftxui::LESS_THAN, 173)}));
    auto screen_1 = ftxui::Screen::Create(ftxui::Dimension::Fit(data_1), ftxui::Dimension::Fit(data_1));
    Render(screen_1, data_1);
    screen_1.Print();

    
    if (forecast->GetCity().status == 200) {
        for (int i = 0; i < forecast->GetDaysAmount(); ++i) {
            auto data_2 = ftxui::window(
                    ftxui::text(forecast->GetDay(i).day.substr(0,10)) | ftxui::hcenter,
                    ftxui::hbox({PrintTime(forecast, i, 0) | ftxui::size(ftxui::WIDTH, ftxui::LESS_THAN, 45),
                                 ftxui::separator(),
                                 PrintTime(forecast, i, 1) | ftxui::size(ftxui::WIDTH, ftxui::LESS_THAN, 45),
                                 ftxui::separator(),
                                 PrintTime(forecast, i, 2) | ftxui::size(ftxui::WIDTH, ftxui::LESS_THAN, 45),
                                 ftxui::separator(),
                                 PrintTime(forecast, i, 3) | ftxui::size(ftxui::WIDTH, ftxui::LESS_THAN, 45),}));

            auto screen_2 = ftxui::Screen::Create(ftxui::Dimension::Fit(data_2), ftxui::Dimension::Fit(data_2));

            Render(screen_2, data_2);
            screen_2.Print();
        }
    } else {
        std::cout << "City not found" << std::endl;
    }
}
