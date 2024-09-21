//
// Created by kait on 9/21/24.
//

#include "game_dictionary.h"
#include <fstream>

void Game_Dictionary::loadIntoWord(std::string word) {
    dictionary.insert(word);
}

void Game_Dictionary::loadIntoDictionary() {
    std::ifstream dict;
    dict.open("dictionary.txt");
    getline(str, dict);
    dict.close()
}