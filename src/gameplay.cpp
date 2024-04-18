#include <iostream>
#include "../include/gameplay.h"
#include "../include/animations.h"

void startGame(bool started, int stage){
    if (!started){
        storyLineIntro();
    }
}