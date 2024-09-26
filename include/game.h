//
// Created by kait on 9/21/24.
//

#ifndef WORDLE_GAME_H
#define WORDLE_GAME_H

#include <iostream>
#include <string>
#include "game_dictionary.h"
#include "console_io.h"

class Game: private Game_Dictionary, public Console{
private:
    std::string secret_word;
    size_t len_secret_word;
    size_t attempts = 0;
    std::string checkWord(std::string);
    bool checkWin(const std::string&) const;
    bool checkLength(const std::string&) const;
    void Restart();
public:
    void Start();
    bool isGameOn;
    explicit Game(const std::string& dict);
};

#endif //WORDLE_GAME_H
