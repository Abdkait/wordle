//
// Created by kait on 9/21/24.
//

#include "console_io.h"

void Console::ConsoleStartGame() {
    std::cout << "enter a word:" << std::endl;
}

void Console::ConsoleOutputString(std::string str) {
    std::cout << str << std::endl;
}

std::string Console::ConsoleInputWord() {
    std::cin >> input;
    return input;
}