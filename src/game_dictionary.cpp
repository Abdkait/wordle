//
// Created by kait on 9/21/24.
//

#include "game_dictionary.h"
#include <algorithm>
#include <fstream>
#include <random>
#include <stdexcept>

void Game_Dictionary::loadIntoWord(std::string& word, size_t num) {
    dictionary[word] = num;
}

Game_Dictionary::Game_Dictionary(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Ошибка при открытии файла: " << filename << std::endl;
        exit(1);
    }

    std::string word;

    std::getline(file, word);

    int num = 1;
    while (std::getline(file, word)) {
        dictionary[word] = num;
        ++num;
    }

    file.close();
}

bool Game_Dictionary::checkDictionary(const std::string& str) {
    return dictionary.find(str) != dictionary.end();
}

int getRandomNumber(size_t n) {
    static std::mt19937 gen(std::random_device{}());
    static std::uniform_int_distribution<> dis(0, n - 1);

    return dis(gen);
}


std::string Game_Dictionary::getWord() {
    auto item = dictionary.begin();
    std::advance(item, getRandomNumber(dictionary.size()));
    return item->first;
}