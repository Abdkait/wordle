#include <iostream>
#include "console_io.h"
#include "game_dictionary.h"
#include "game.h"

int main() {
    const std::string filename = "dictionaryENG.txt";
    Game_Dictionary dict(filename);
    Game game(dict);
    Console cons;
    Console::ConsoleStartGame(game);
    while(game.isGameOn){
        cons.ConsoleOutputString(game.check(cons.ConsoleInputWord(game)), game);
    }
    return 0;
}

