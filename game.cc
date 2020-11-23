#include "game.h"


//deconstructor
Game::~Game()
{
    if (outside != nullptr) {
        delete outside;
    }
}