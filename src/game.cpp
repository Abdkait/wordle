//
// Created by kait on 9/21/24.
//

#include "game.h"

Game::Game(Game_Dictionary& dict): secret_word(dict.getWord()), isGameOn(true){
    len_secret_word = secret_word.size();
}

std::string& Game::check(std::string& str){
    if(str.size() != len_secret_word){
        str = "use the correct length";
        return str;
    }
    ++attempts;
    for (size_t i = 0; i < len_secret_word; ++i){
        if(str[i] == secret_word[i]){
            str[i] = 'X';
        }else if(secret_word.find(str[i]) != -1){
            str[i] = '+';
        }else{
            str[i] = '-';
        }
    }
    return str;

}

size_t Game::getLen() const{
    return len_secret_word;
}
size_t Game::getAttempts() const{
    return attempts;
}