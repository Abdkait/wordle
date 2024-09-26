//
// Created by kait on 9/21/24.
//

#include "console_io.h"

void Console::ConsoleStartGame(size_t length) {
    std::cout << "Hidden word length is " << length << std::endl;
    std::cout << "Enter a word:" << std::endl;
}

void Console::ConsoleOutputString(const std::string& str) {
    std::cout << str << std::endl;
}

std::string Console::ConsoleInputWord() {
    std::string temp;
    std::cin >> temp;
    return temp;
}
