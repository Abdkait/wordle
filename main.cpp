#include <iostream>
#include "console_io.h"
//#include "game_dictionary.h"
#include <fstream>
#include <vector>

std::vector<std::string> readWordsFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Ошибка при открытии файла: " << filename << std::endl;
        exit(1);
    }

    std::vector<std::string> dict;
    std::string word;

    while (std::getline(file, word)) {
        dict.push_back(word);
    }

    file.close();
    return dict;
}

void writeWordsFromFile(const std::string& filename, std::string word) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Ошибка при открытии файла: " << filename << std::endl;
        exit(1);
    }

    std::vector<std::string> dict;

    file << word <<std::endl;

    file.close();
}


int main() {
    const std::string filename = "sample.txt";
    std::vector<std::string> dict;
    readWordsFromFile(filename);


    // Теперь dict содержит все слова из файла
    std::cout << dict[0] << dict.size() << std::endl;

    return 0;
}

