#include "Objects.h"
#include <algorithm>


GameObject::GameObject(int X, int Y, bool isSinglePoint, intPair coordinateArray, char objectSymbol){
	positionX = X;
	positionY = Y;
	isPoint = isSinglePoint;
	coordinates = coordinateArray;
	symbol = objectSymbol;
}

std::string GameObject::returnName(){
	return "GameObject";
}

// bool blockOverlap(int, int, int, int, int, int, int, int);

// GameObject::GameObject(ObjectType objectType)
// {
// 	type = objectType;
// 	pos = std::make_pair(-1, -1);
// }

// GameObject::GameObject(ObjectType objectType, std::pair<int, int> objectPos)
// {
// 	type = objectType;
// 	pos = objectPos;
// }

// bool GameObject::overlaps(GameObject object)
// {
// 	for (auto it = nodes.begin(); it != nodes.end(); it++)
// 	{
// 		for (auto it2 = object.nodes.begin(); it2 != object.nodes.end(); it2++)
// 		{
// 			int x1 = it->first.first, y1 = it->first.second;
// 			int x2 = it2->first.first, y2 = it2->first.second;
// 			int w1 = it->second.first, h1 = it->second.second;
// 			int w2 = it2->second.first, h2 = it2->second.second;
// 			if (blockOverlap(x1, y1, w1, h1, x2, y2, w2, h2))
// 				return true;
// 		}
// 	}
// 	return false;
// }

// bool blockOverlap(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2)
// {
// 	using std::max;
// 	using std::min;
// 	int width = std::min(x1, x2) == x1 ? w1 : w2;
// 	int height = std::min(y1, y2) == y1 ? h1 : h2;
// 	return min(x1, x2) + width > max(x1, x2) && min(y1, y2) + height > max(y1, y2);
// }