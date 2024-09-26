//
// Created by kait on 9/21/24.
//

#include "game.h"

Game::Game(const std::string& dict)
    : Game_Dictionary(dict)
    , secret_word(getWord())
    , len_secret_word(secret_word.size())
    , attempts(0)
    , isGameOn(true){}

void Game::Restart() {
    ConsoleOutputString("Don't you want to play again? (y/n)");
    std::string temp = ConsoleInputWord();
    while(temp != "y" && temp != "n"){
        ConsoleOutputString("y/n: ");
        temp = ConsoleInputWord();
    }
    if(temp == "y"){
        secret_word = getWord();
        len_secret_word = secret_word.size();
        attempts = 0;
        return;
    } else{
        isGameOn = false;
    }
}

void Game::Start() {
    if(attempts == 0){
        ConsoleStartGame(len_secret_word);
    }
    std::string temp = ConsoleInputWord();
    while(!(checkLength(temp) && checkDictionary(temp))){
        if(temp == "_restart_"){
            ConsoleOutputString("you lose!");
            Restart();
            return;
        }
        else if(!checkLength(temp)){
            ConsoleOutputString("Use correct length!");
        }else{
            ConsoleOutputString("Not found!");
        }
        temp = ConsoleInputWord();
    }
    ++attempts;
    temp = checkWord(temp);
    if(checkWin(temp)){
        ConsoleOutputString("you win!");
        Restart();
    }else {
        ConsoleOutputString(temp);
    }
}

std::string Game::checkWord(std::string str){
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

bool Game::checkWin(const std::string& str) const{
    for(int i = 0; i < str.size(); ++i){
        if (str[i] != 'X'){
            return false;
        }
    }
    return true;
}

bool Game::checkLength(const std::string& str) const{
    return str.size() == len_secret_word;
}