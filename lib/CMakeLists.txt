add_library(forecast_lib forecast.cpp forecast.h)
add_library(handler_lib handler.cpp handler.h)
add_library(interface_lib interface.cpp interface.h)

target_link_libraries(handler_lib PRIVATE forecast_lib)
target_link_libraries(handler_lib PRIVATE interface_lib)
target_link_libraries(interface_lib PRIVATE forecast_lib)

target_link_libraries(handler_lib PRIVATE ncurses)
target_link_libraries(interface_lib PRIVATE ncurses)

target_link_libraries(handler_lib PUBLIC cpr::cpr)
target_link_libraries(handler_lib PUBLIC ftxui::screen PUBLIC ftxui::dom PUBLIC ftxui::component)
target_link_libraries(handler_lib PUBLIC nlohmann_json::nlohmann_json)
target_link_libraries(interface_lib PUBLIC ftxui::screen PUBLIC ftxui::dom PUBLIC ftxui::component)
target_link_libraries(interface_lib PUBLIC nlohmann_json::nlohmann_json)
