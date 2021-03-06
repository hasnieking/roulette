//note this is a vulnerable program, never run it with more privileges
#include <iostream>
#include <string>
#include "game.h"
#include "playgame.h"

enum class settings : char {
    play = '1',
    scientific = '2',
    quit = '3'
};


int main (int argc, char **argv) 
{
    std::string choice;
    //main menu
    std::cout << "Welcome to roulette" << std::endl;
    std::cout << '[' << char(settings::play) << "]Play\n[" << char(settings::scientific) << "]Scientific\n[" 
        << char(settings::quit) << "]Quit\n" << std::endl;

    std::cout << "Make choice: ";
    std::getline(std::cin, choice);

    if (choice.size() != 1) {
        std::cerr << "Invalid input" << std::endl;
        return 1;
    }

    switch (choice[0]) {
        case char(settings::play) :
            std::cerr << "Play" << std::endl;
            playgame();
            break;
        case char(settings::scientific) :
            std::cerr << "Scientific" << std::endl;
            break;
        case char(settings::quit) :
            std::cerr << "Quit" << std::endl;
            break;
        default :
            std::cerr << "Invalid input" << std::endl;
            return 1;
    }

    return 0;
}