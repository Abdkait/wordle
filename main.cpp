#include <iostream>

#include "console_io.h"

int main() {
    Console start;
    Console::ConsoleStartGame();
    std::string temp;
    temp = start.Console::ConsoleInputWord();
    Console::ConsoleOutputString(temp);
    return 0;
}
