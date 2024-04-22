//
// Created by Adrian Sudak on 22/04/2024.
//

#ifndef GAME_H
#define GAME_H

#include "Engine.h"

class Game : public Engine {
public:
    Game(const char* fn);
    virtual ~Game(){}
    void play();
    void play(int n);
    virtual void display() = 0;

    Game(const Game& g);
    Game& operator=(const Game& g) = delete;
};
#endif //GAME_H
