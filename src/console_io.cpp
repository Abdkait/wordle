//
// Created by kait on 9/21/24.
//

#include "console_io.h"

void Console::ConsoleStartGame(Game& game) {
    std::cout << "hidden word length " << game.getLen() << std::endl;
}

void Console::ConsoleOutputString(std::string& str, Game& game) {
    bool f = true;
    for (int i = 0; i < str.size(); ++i){
        if(str[i] != 'X'){
            f = false;
            break;
        }
    }
    if(f){
        std::cout<< "you won!" <<std::endl;
        game.isGameOn = false;
    }else {
        std::cout << str << std::endl;
        output.push_back(str);
    }
}

std::string& Console::ConsoleInputWord(Game& game) {
    std::cout << "number of attempts is " << game.getAttempts()+1 <<", enter a word:" << std::endl;
    std::string word;
    std::cin >> word;
    input.push_back(word);
    return input.back();
}
