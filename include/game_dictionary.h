//
// Created by kait on 9/21/24.
//

#ifndef WORDLE_GAME_DICTIONARY_H
#define WORDLE_GAME_DICTIONARY_H

#include <iostream>
#include <string>
#include <set>

class Game_Dictionary{
public:
    void loadIntoWord(std::string word);
    void loadIntoDictionary();
    std::string getWord();
private:
    std::string str;
    std::set<std::string> dictionary;
};

#endif //WORDLE_GAME_DICTIONARY_H
