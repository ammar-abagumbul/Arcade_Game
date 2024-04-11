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
private:
	int positionX;
	int positionY;
	bool isPoint;
	intPair coordinates;
	char symbol;

public:
	// ObjectType type;
	// intPair pos;
	// std::vector<intPair, intPair> nodes; // a list of continious blocks to allow for flexeble shapes pair(pos, dimension)
	// ObjectType type;
	// bool pickedUp;

	// GameObject(ObjectType type);
	// GameObject(ObjectType type, std::pair<int, int> pos);

	// bool overlaps(GameObject object);
	GameObject(int X, int Y, bool isSinglePoint, intPair coordinateArray, char objectSymbol);

	int getPositionX();
	int getPositionY();
	bool getisPoint();
	intPair getCoordinates();
	char getSymbol();

	void setPositionX(int newX);
	void setPositionY(int newY);

	std::string returnName();
};

class GunObject : public GameObject
{
private:
	int Ammo;
	bool PickedUp;

public:
	bool Drop();
	bool CanShoot(int positionX, int positionY);
	bool Shoot(int positionX, int positionY);
	
};

class DoorObject : public GameObject
{
private:
	std::string Password;
	bool Closed;

public:


};

class KeyObject : public GameObject
{
private:
	bool PickedUp;
	std::string Passwork;

public:
	bool Unlock(Door* DoorPointer); 
	//Checks if password of Door and Key Match. If yes, sets DoorObject Closed to Open. Returns True if Unlock is successful and False otherwise
};
#endif