//
// Created by kait on 9/21/24.
//

#ifndef WORDLE_CONSOLE_IO_H
#define WORDLE_CONSOLE_IO_H

#include <iostream>
#include <vector>

class Console{
protected:
    void static ConsoleStartGame(size_t);
    void static ConsoleOutputString(const std::string&);
    static std::string ConsoleInputWord();
};

#endif //WORDLE_CONSOLE_IO_H
