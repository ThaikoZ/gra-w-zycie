//
// Created by Adrian Sudak on 22/04/2024.
//

#ifndef VIEW_H
#define VIEW_H

#include "Game.h"

class View : public Game {
public:
    View(const char* fn);
    virtual ~View() {}
    virtual void display();

    View(const View& g);
    View& operator=(const View& g) = delete;
};
#endif //VIEW_H