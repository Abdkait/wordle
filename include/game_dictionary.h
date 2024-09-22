//
// Created by kait on 9/21/24.
//

#ifndef WORDLE_GAME_DICTIONARY_H
#define WORDLE_GAME_DICTIONARY_H

#include <iostream>
#include <string>
#include <vector>

class Game_Dictionary{
public:
    void loadIntoWord(std::string word);
    //Game_Dictionary();
    std::string getWord();
private:
    static std::vector<std::string> dictionary;
};

#endif //WORDLE_GAME_DICTIONARY_H
