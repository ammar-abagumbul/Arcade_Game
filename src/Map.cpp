#include "Map.h"
#include "Objects.h"
#include <iostream>
#include <fstream>
#include <string>

void populate_nodes(GameObject &object, intPair coord);

Map::Map(std::string f, int w, int h)
{
	std::ifstream mapfile;
	mapfile.open(f);
	std::string top, middle, bottom;

	if (mapfile.fail())
	{
		std::cout << "Failed to open map file. \n";
		std::exit(1);
	}

	std::getline(mapfile, top);
	std::getline(mapfile, top);
	std::getline(mapfile, middle);
	int width = top.length();
	int line = 1;

	while (std::getline(mapfile, bottom))
	{
		for (int i = 2; i < width - 2; i += 2)
		{
			switch (top[i])
			{
			case ' ':
				continue;
			case 't':
				GameObject table(ObjectType::T, std::make_pair(i / 2, line));
				populate_nodes(table, table.pos);
				gameObjects.push_back(table);
			}
		}
		line++;
	}

	/*
	open file first
	iterate line by line (points to exlude first line, first and last 2 characters)
	items top most corner will be marked by a letter marking the type of the object
		k: key
		t: table
		d: door
		c: characters
		f: furniture (closet most prolly)
		 : empty block means wall unpassable barrier
	*/
}