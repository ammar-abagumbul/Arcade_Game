#include <iostream>
using namespace std;

const int mapr=10, mapc=10;

void PrintMap(char m[][mapc])
{
	for (int i=0; i<mapr; i++)
	{
		for (int j=0; j<mapc; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
}

int IsInMap(char m[][mapc], char key)
{
	// Checks if key is in the map (Different from IsIn() cuz map is 2D)
	for (int i=0; i<mapr; i++)
		for (int j=0; j<mapc; j++)
			if (m[i][j] == key) return 1;
	return 0;
}

int IsIn(char arr[], int l, char key)
{
	for (int i=0; i<l; i++)
		if (arr[i] == key) return 1;
	return 0;
}

void MakeMove(char map[][mapc], char &objectbelow, int &cy, int &cx, int dy, int dx)
{
        // Verifies and makes the move
        char blocking[] = {'w','t','d'};
        cout << "cy: "<< cy << " cx: " << cx << " dy: " << dy << " dx: " << dx << endl;
        if (cy+dy<0 || cy+dy>=mapr || cx+dx<0 || cx+dx>=mapc)
        {
                cout << "out of bounds." << endl;
                return;
        }
        if (IsIn(blocking, 3, map[cy+dy][cx+dx]))
        {
                cout << "blocked by object." << endl;
                return;
        }
        map[cy][cx] = objectbelow;
	objectbelow = map[cy+dy][cx+dx];
        map[cy+dy][cx+dx] = 'p';
        cy += dy;
        cx += dx;
}

void GetMove(char map[][mapc], char &objectbelow, char &helditem, int &cy, int &cx)
{
	// Takes user input, verifies it, and converts it into dy and dx
	char n = 0;
	while (true)
	{
		char surround[] =
		{
			map[cy-1][cx],
			map[cy][cx-1],
                        map[cy+1][cx],
                        map[cy][cx+1],
		};
		cout << "surroundings: "<< surround[0] << surround[1] << surround[2]<< surround[3] << endl;
		if (helditem != 0)
		{
			cout << "held item: " << helditem << endl;
		}
		if (helditem == 'k' && IsIn(surround, 4, 'd'))
		{
			cout << "[E] open door" << endl;
		}
		if (objectbelow != '.')
		{
			cout << "[E] pick up " << objectbelow << endl;
		}
		cout << "input move: ";
		cin >> n;
		char movementkeys[8] = {'w','a','s','d','W','A','S','D'};
		if (IsIn(movementkeys, 8, n))
		{
			int dx=0, dy=0;
			if (n=='w' || n=='W') dy = -1;
			else if (n=='a' || n=='A') dx = -1;
        		else if (n=='s' || n=='S') dy = 1;
        		else if (n=='d' || n=='D') dx = 1;
			MakeMove(map, objectbelow, cy, cx, dy, dx);
		}
		else if ((helditem == 'k' && IsIn(surround, 4, 'd')) && (n == 'E' || n == 'e'))
		{
			if (surround[0] == 'd') map[cy-1][cx] = 'u';
                        else if (surround[1] == 'd') map[cy][cx-1] = 'u';
                        else if (surround[2] == 'd') map[cy+1][cx] = 'u';
                        else if (surround[3] == 'd') map[cy][cx+1] = 'u';
		}
		else if (objectbelow != '.' && (n == 'E' || n == 'e'))
		{
			helditem = objectbelow;
			objectbelow = '.';
		}
		return;
	}
}

int main()
{
	/*
	. = air
	w = wall
	p = player
	t = target
	d = door
	u = unlocked door
	k = key
	*/
	char map[mapr][mapc] =
	{
		'.','.','.','p','.','w','.','.','.','.',
		'.','.','.','.','.','w','.','.','.','.',
		'.','.','.','.','.','w','.','.','.','.',
		'.','.','.','.','.','w','.','.','.','.',
		'.','.','.','.','.','w','.','.','.','.',
		'.','.','.','.','.','w','.','t','.','.',
		'.','.','.','.','.','w','.','.','.','.',
		'.','.','.','.','.','w','.','.','.','.',
		'.','.','.','.','.','d','.','.','.','.',
		'k','.','.','.','.','w','.','.','.','.',
	};
	char objectbelow = '.';
	char helditem = 0;
	int cy = 0, cx = 3;
	while (IsInMap(map, 't'))
	{
		PrintMap(map);
		GetMove(map, objectbelow, helditem, cy, cx);
	}
	cout << "I'm out dawg." << endl;
	return 0;
}
