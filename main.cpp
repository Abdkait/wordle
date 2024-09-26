#include <iostream>
#include "console_io.h"
#include "game.h"

int main() {
    const std::string filename = "dictionaryENG.txt";
    Game game(filename);
    while(game.isGameOn){
        game.Start();
    }
    return 0;
}

