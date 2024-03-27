#include "Map.h"
#include "Objects.h"
#include <iostream>
#include <fstream>
#include <vector>
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
}
//function to open map file and add the map in a vector for each object map 
void Map::renderMap()
{
		std::ifstream file;
		file.open(filename.c_str());
		if (file.fail()){
			std::cout << "Error in file opening" << std::endl;
			exit(1);
		}
		std::string line;
		while(std::getline(file, line)){
			std::vector<char> col;
			for (char c: line){
				col.push_back(c);
			}
			map.push_back(col);	
		}
		file.close();
};

void Map::printMap()
{
	for (int i = 0; i < map.size(); i++){
		for (int j = 0; j < map[i].size(); i++){
			std::cout <<  map[i][j];
		}
		std::cout << std::endl;
	}
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
