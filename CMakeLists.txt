cmake_minimum_required(VERSION 3.27)
project(wordle)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(wordle main.cpp
        include/game.h
        include/game_dictionary.h
        src/game.cpp
        src/game_dictionary.cpp
        include/console_io.h
        src/console_io.cpp)
