#include <iostream>
#include "console_io.h"
#include "game.h"
#include <windows.h>


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const std::string filename = "dictionaryENG.txt";
    Game game(filename);
    while(game.isGameOn){
        game.Start();
    }
    return 0;
}