cmake_minimum_required(VERSION 3.26)
project(wordle)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(wordle main.cpp
        include/game.h
        src/game.cpp
        include/console_io.h
        src/console_io.cpp
        include/game_dictionary.h
        src/game_dictionary.cpp
        )
