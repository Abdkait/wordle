//
// Created by kait on 9/21/24.
//

#ifndef WORDLE_CONSOLE_IO_H
#define WORDLE_CONSOLE_IO_H

#include <iostream>

class Console{
private:
    std::string input;
public:
    void static ConsoleStartGame();
    void static ConsoleOutputString(std::string);
    std::string ConsoleInputWord();
};

#endif //WORDLE_CONSOLE_IO_H
