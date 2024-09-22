//
// Created by kait on 9/21/24.
//

#ifndef WORDLE_CONSOLE_IO_H
#define WORDLE_CONSOLE_IO_H

#include <iostream>
#include <vector>

class Console{
private:
    std::vector<std::string> input;
    std::vector<std::string> output;
public:
    void static ConsoleStartGame();
    void ConsoleOutputString(std::string&);
    std::string& ConsoleInputWord();
};

#endif //WORDLE_CONSOLE_IO_H
