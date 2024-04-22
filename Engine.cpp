//
// Created by Adrian Sudak on 22/04/2024.
//
#include "Engine.h"
#include <fstream>

Engine::Engine(const char* fn) {
    std::ifstream f(fn);

    f >> nw >> nk;
    arr = new bool*[nw];
    temp = new bool*[nk];

    for(int i = 0; i < nk; i++) {
        arr[i] = new bool[nk];
        temp[i] = new bool[nk];
        for(int j = 0; j < nk; j++) {
            arr[i][j] = false;
            temp[i][j] = false;
        }
    }

    int n = 0; f >> n;
    int x, y;
    for(int i = 0; i < n; i++) {
        f >> x >> y;
        arr[x][y] = true;
        temp[x][y] = true;
    }
}

Engine::~Engine() {
    if(arr) {
        for(int i = 0; i < nw; i++) {
            delete [] arr[i];
            delete [] temp[i];
        }

        delete [] arr;
        delete [] temp;
    }
}

void Engine::analize() {
    for(int i = 0; i < nw; i++) {
        for(int j = 0; j < nk; j++) {
            const int friends = countFriends(i, j);

            bool isAlive = arr[i][j];
            if(!isAlive && friends == 3)
                temp[i][j] = true;
            else if(isAlive && (friends == 2 || friends == 3))
                temp[i][j] = true;
            else
                temp[i][j] = false;
        }
    }
    for(int i = 0; i < nw; i++) {
        for(int j = 0; j < nk; j++) {
            arr[i][j] = temp[i][j];
        }
    }
}

int Engine::countFriends(const int w, const int k) {
    int amount = 0;
    for(int i = w == 0 ? 0 : -1; i < (w+1 == nw ? 1 : 2); i++) {
        for(int j = k == 0 ? 0 : -1; j < (k+1 == nk ? 1 : 2); j++) {
            if(i == 0 && j == 0)
                continue;
            if(arr[w + i][k + j]) {
                amount++;
            }
        }
    }
    return amount;
}