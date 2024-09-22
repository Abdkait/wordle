//
// Created by kait on 9/21/24.
//

#include "console_io.h"

void Console::ConsoleStartGame() {
    std::cout << "enter a word:" << std::endl;
}

void Console::ConsoleOutputString(std::string& str) {
    std::cout << str << std::endl;
    output.push_back(str);
}

std::string& Console::ConsoleInputWord() {
    auto* word = new std::string;
    std::cin >> *word;
    input.push_back(*word);
    return *word;
}