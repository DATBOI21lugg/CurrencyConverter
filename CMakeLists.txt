cmake_minimum_required(VERSION 3.21)

project(CurrencyConverter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(cpr CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)

add_executable(CurrencyConverter
    src/APidemo.cpp
    src/main.cpp
)

target_include_directories(CurrencyConverter
    PRIVATE
        include
)

target_link_libraries(CurrencyConverter
    PRIVATE
        cpr::cpr
        nlohmann_json::nlohmann_json
)

add_executable(ApiSmokeTest
    src/APIdemo.cpp
)

target_include_directories(ApiSmokeTest
    PRIVATE
        include
)

target_link_libraries(ApiSmokeTest
    PRIVATE
        cpr::cpr
        nlohmann_json::nlohmann_json
)