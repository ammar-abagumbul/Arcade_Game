#include <iostream>
#include <string>
#include <utility>
#include <vector>

#ifndef OBJECTS_H_
#define OBJECTS_H_

typedef std::pair<int, int> intPair;

// to track the object types
enum class ObjectType
{
	K, // k for key c for clothes g for gun
	C,
	G,
	T,
	// Add more object types as needed
};

class GameObject
{
public:
	ObjectType type;
	intPair pos;
	std::vector<intPair, intPair> nodes; // a list of continious blocks to allow for flexeble shapes pair(pos, dimension)
	ObjectType type;
	bool pickedUp;

	GameObject(ObjectType type);
	GameObject(ObjectType type, std::pair<int, int> pos);

	bool overlaps(GameObject object);
};

#endif