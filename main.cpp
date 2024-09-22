#include <iostream>
#include <vector>
#include "console_io.h"
#include "game_dictionary.h"
#include "game.h"

int main() {
    const std::string filename = "dictionary.txt";
    Game_Dictionary dict(filename);
    Console cons;
    Game game(dict);
    return 0;
}

