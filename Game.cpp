//
// Created by Adrian Sudak on 22/04/2024.
//

#include "Game.h"
#include <iostream>
Game::Game(const char* fn) : Engine(fn) {};

void Game::play() {
    while(true) {
        display();
        analize();
        std::cin.get();
    }
}

void Game::play(int n) {
    while(n > 0) {
        display();
        analize();
        n--;
    }
}

