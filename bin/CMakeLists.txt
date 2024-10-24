add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC forecast_lib)
target_link_libraries(${PROJECT_NAME} PUBLIC handler_lib)
target_link_libraries(${PROJECT_NAME} PUBLIC interface_lib)
target_link_libraries(${PROJECT_NAME} PUBLIC cpr::cpr)
target_link_libraries(${PROJECT_NAME} PUBLIC ftxui::screen PUBLIC ftxui::dom PUBLIC ftxui::component)
target_link_libraries(${PROJECT_NAME} PUBLIC nlohmann_json::nlohmann_json)

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR})
