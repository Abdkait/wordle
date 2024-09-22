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
    void loadIntoWord(std::string& word);
    explicit Game_Dictionary(const std::string& filename);
    std::string getWord();
private:
    std::vector<std::string> dictionary;
};

#endif //WORDLE_GAME_DICTIONARY_H
