cmake_minimum_required(VERSION 3.12)

project(
        WeatherForecast
        VERSION 1.0
        LANGUAGES CXX
)


include(FetchContent)

FetchContent_Declare(cpr
        GIT_REPOSITORY https://github.com/libcpr/cpr.git
        GIT_TAG 3b15fa82ea74739b574d705fea44959b58142eb8)
FetchContent_MakeAvailable(cpr)

FetchContent_Declare(ftxui
        GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
        GIT_TAG v4.0.0)
FetchContent_MakeAvailable(ftxui)

if(NOT ftxui_POPULATED)
 FetchContent_Populate(ftxui)
 add_subdirectory(${ftxui_SOURCE_DIR} ${ftxui_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

FetchContent_Declare(json
        URL https://github.com/nlohmann/json/releases/download/v3.11.2/json.tar.xz)
FetchContent_MakeAvailable(json)


set(CMAKE_CXX_STANDARD 20)


add_subdirectory(lib)
add_subdirectory(bin)