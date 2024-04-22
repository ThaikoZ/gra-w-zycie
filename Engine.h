//
// Created by Adrian Sudak on 22/04/2024.
//

#ifndef ENGINE_H
#define ENGINE_H

class Engine {
protected:
    int nw, nk;
    bool **arr, **temp;

    Engine(const char* fn);
    ~Engine();
    void analize();

public:
    Engine& operator=(const Engine& e) = delete;

private:
    int countFriends(int w, int k);
    Engine(const Engine& e);
};

#endif //ENGINE_H
