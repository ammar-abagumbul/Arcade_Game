#include "objects.h"
#include <iostream>
using namespace std;


void pickUpObject(char heldObjects[], char gameMap[][col], int x, int y, int rows, int cols, bool pickedUp) {
    // Check if the coordinates are valid
    if (x >= 0 && x < rows && y >= 0 && y < cols) {
        // Add the object to held_objects
        held_objects.push_back(gameMap[x][y]);

        //replace object with '.' in map
        gameMap[x][y] = '.';
        pickedUp = true;
    }
}