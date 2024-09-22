//
// Created by kait on 9/21/24.
//

#ifndef WORDLE_GAME_H
#define WORDLE_GAME_H

#include <iostream>
#include <string>
#include "game_dictionary.h"

class Game{
private:
    std::string secret_word;
public:
    Game(Game_Dictionary& dict);
    std::string check(std::string&);
};

#endif //WORDLE_GAME_H
