#include <vector>
#include <string>
#include "Objects.h"

#ifndef MAP_H_
#define MAP_H_

class Map
{
private:
	char **pixels;
	int width;
	int height;

public:
	std::vector<GameObject> gameObjects;

	Map(std::string filename, int width, int height);
	Map(std::string mapstring, int width, int height); // for testing, would most probably be removed later

	void renderMap();

	void cleanup();
};

#endif