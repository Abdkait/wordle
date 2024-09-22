//
// Created by kait on 9/21/24.
//

#ifndef WORDLE_CONSOLE_IO_H
#define WORDLE_CONSOLE_IO_H

#include <iostream>
#include <vector>
#include "game.h"

class Console{
private:
    std::vector<std::string> input;
    std::vector<std::string> output;
public:
    void static ConsoleStartGame(Game& game);
    void ConsoleOutputString(std::string&, Game& game);
    std::string& ConsoleInputWord(Game& game);
};

#endif //WORDLE_CONSOLE_IO_H
