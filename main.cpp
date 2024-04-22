#include <iostream>
#include "View.h"

using namespace std;

int main() {
    View game("database.txt");
    game.play();

    return 0;
}

