#include <string>
#include <iostream>
#include "playgame.h"

//plays the game in the normal way
void playgame() {
    std::string input = "";

    Game * game = new Game(1000, true);

    //run while not quit (q)
    while (input.compare("q") != 0) {
        std::getline(std::cin, input);
    }




    delete game;
}