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
    std::string answer;
    std::string secret_word;
    size_t len_secret_word;
    size_t attempts = 0;
public:
    size_t getLen() const;
    size_t getAttempts() const;
    bool isGameOn;
    explicit Game(Game_Dictionary& dict);
    std::string& check(std::string&);
};

#endif //WORDLE_GAME_H
