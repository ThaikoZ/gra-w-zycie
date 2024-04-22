//
// Created by Adrian Sudak on 22/04/2024.
//

#include "View.h"
#include <iostream>

View::View(const char* fn) : Game(fn) { }

void View::display() {
    for(int i = 0; i < nw; i++) {
        for(int j = 0; j < nk; j++)
            std::cout << (arr[i][j] ? "x" : ".") << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
}