cmake_minimum_required(VERSION 4.2)
project(Monkey_Typer LANGUAGES CXX)

include(FetchContent)

# SFML 3.0
FetchContent_Declare(
        SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 3.1.0
        GIT_SHALLOW ON
        EXCLUDE_FROM_ALL
        SYSTEM
)

# FMT
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG 11.2.0
        GIT_SHALLOW ON
)

FetchContent_MakeAvailable(SFML fmt)

set(CMAKE_CXX_STANDARD 23)

add_executable(Monkey_Typer
        src/main.cpp
        include/ui/panels.hpp
        src/ui/panels.cpp
)
target_link_libraries(Monkey_Typer PRIVATE SFML::Graphics fmt::fmt)