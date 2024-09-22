//
// Created by kait on 9/21/24.
//

#include "game_dictionary.h"
#include <algorithm>

void Game_Dictionary::loadIntoWord(std::string word) {
    dictionary.push_back(word);
}
/*
Game_Dictionary::Game_Dictionary() {
    std::ifstream file("dictionary.txt");
    std::string word;
    while(!file.eof()) {
        file >> word;
        loadIntoWord(word);
    }
    file.close();
}*/

std::string Game_Dictionary::getWord() {
    int r = rand() % dictionary.size(); // not _really_ random
    return dictionary[r];
}