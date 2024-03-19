#include <iostream>
#include <string>
#ifndef OBJECTS_H_
#define OBJECTS_H_
using namespace std;

//to track the object types
enum class ObjectType {
    K, //k for key c for clothes g for gun
    C,
    G,
    // Add more object types as needed
};

class GameObject {
public:
    GameObject(ObjectType type) : type(type), pickedUp(false) {}

    void pickUp() {
        pickedUp = true;
    }

    bool isPickedUp() const {
        return pickedUp;
    }

    ObjectType getType() const {
        return type;
    }
    //rows and cols for sze of map, x and y are coords of object
    void pickUpObject(char heldObjects[], char gameMap[][col], int x, int y, int rows, int cols) {
    // Check if the coordinates are valid
    if (x >= 0 && x < rows && y >= 0 && y < cols) {
        // Add the object to held_objects
        held_objects.push_back(gameMap[x][y]);

        //replace object with '.' in map
        gameMap[x][y] = '.';
    }
}

private:
    ObjectType type;
    bool pickedUp;
};

#endif