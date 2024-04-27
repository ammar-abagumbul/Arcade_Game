#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Position{
	int y;
	int x;
};

struct Mirror{
	Position pos;
	char dir;
};

struct Laser{
	Position pos;
	Position dir;
	bool on;
};

struct Button{
	Position pos;
	char func;
	Position targ;
	bool on;
};

struct Gate{
	Position pos;
	bool on;
};

void PrintMap(char** field, int h, int w){
	// you'll never believe what this one does
	for (int i=0; i<h; i++){
		for (int j=0; j<w; j++)
			cout << field[i][j];
		cout << endl;
	}
	return;
}

void EndGame(char** field, int h, int w){
	for (int i=0; i<h; i++)
        	delete[] field[i];
	delete[] field;
	exit(0);
}

void TracePath(char** field, int h, int w, Position i, Position d){
	switch (field[i.y+d.y][i.x+d.x]){
		case ' ':
			if (d.y) field[i.y+d.y][i.x+d.x] = '|';
			else field[i.y+d.y][i.x+d.x] = '-';
			TracePath(field, h,w, {i.y+d.y, i.x+d.x}, d);
			break;
		case '-': case '|':
			field[i.y+d.y][i.x+d.x] = '+';
			TracePath(field, h,w, {i.y+d.y, i.x+d.x}, d);
			break;
		case '/':
			TracePath(field, h,w, {i.y+d.y, i.x+d.x}, {-d.x, -d.y});
			break;
		case '\\':
			TracePath(field, h,w, {i.y+d.y, i.x+d.x}, {d.x, d.y});
			break;
		case 'P':
			PrintMap(field, h, w);
			cout << "ooh ah you died" << endl;
			EndGame(field, h, w);
	}
	return;
}

int CheckButton(char** field, Button &but, vector<Laser> &las, Gate &gat){
	bool prev = but.on;
	but.on = field[but.pos.y-1][but.pos.x] == '|' || field[but.pos.y+1][but.pos.x] == '|' || field[but.pos.y][but.pos.x-1] == '-' || field[but.pos.y][but.pos.x+1] == '-';
	if (but.on != prev){
		switch (but.func){
			case 'g':
				gat.on = !gat.on;
				break;
			case 'l':
				for (int j=0; j<las.size(); j++)
					if (las[j].pos.y == but.targ.y && las[j].pos.x == but.targ.x)
						las[j].on = !(las[j].on);
				break;
		}
		return 1;
	}
	return 0;
}

void UpdateField(char** field, int h, int w, Position p, vector<Position> box, vector<Mirror> mir, vector<Laser> &las, vector<Button> &but, Gate &gat){
	// clear field
	for (int i=0; i<h; i++)
		for (int j=0; j<w; j++)
			if (field[i][j] != '*') field[i][j] = ' ';

	// redraw elements from positions and other status
	field[gat.pos.y][gat.pos.x] = (gat.on) ? 'O':'X';
	field[p.y][p.x] = 'P';
	for (const Position& i : box)
		field[i.y][i.x] = 'B';
	for (const Mirror& i : mir){
		field[i.pos.y][i.pos.x] = i.dir;
	}
	for (const Laser& i : las){
		char sym[][4] = {" ^ ", "< >", " v "};
		field[i.pos.y][i.pos.x] = sym[i.dir.y+1][i.dir.x+1];
	}
	for (const Button& i : but){
                field[i.pos.y][i.pos.x] = '#';
        }
	for (const Laser& i : las){
		if (i.on) TracePath(field, h,w, i.pos, i.dir);
	}
	for (int i=0; i<but.size(); i++){
		if (CheckButton(field, but[i], las, gat))
			UpdateField(field, h, w, p, box, mir, las, but, gat);
	}
}

bool Push(char** field, Position &p, Position d, vector<Position> &box, vector<Mirror> &mir){
	// checks the block ahead and decides if it's possible to push
	switch (field[p.y+d.y][p.x+d.x]){
		case '*': case '>': case '<': case '#':
			cout << "wall reached" << endl;
			return 0;
			break;
		case 'B': // box
			for (int i=0; i<box.size(); i++){
				if (box[i].y == p.y+d.y && box[i].x == p.x+d.x && Push(field, box[i], d, box, mir)){
					cout << "box pushed" << endl;
					p.y += d.y;
					p.x += d.x;
					return 1;
				}
			}
			break;
		case '/': case '\\': // mirror
			for (int i=0; i<mir.size(); i++){
				if (mir[i].pos.y == p.y+d.y && mir[i].pos.x == p.x+d.x && Push(field, mir[i].pos, d, box, mir)){
					cout << "mirror pushed" << endl;
					p.y += d.y;
					p.x += d.x;
					return 1;
				}
			}
			break;
		default: // air
			p.y += d.y;
			p.x += d.x;
			return 1;
			break;
	}
	return 0;
}

int abs(int v){
  return v * ((v>0) - (v<0));
}

void Rotate(char** field, Position p, vector<Mirror> &mir){
	Position ds[4] = {{-1,0},{0,-1},{1,0},{0,1}};
	for (int i=0; i<mir.size(); i++){
		if ((abs(mir[i].pos.y-p.y) == 1 && mir[i].pos.x-p.x == 0) || (mir[i].pos.y-p.y == 0 && abs(mir[i].pos.x-p.x) == 1)){
			switch (mir[i].dir){
				case '/':
					mir[i].dir = '\\';
					break;
				case '\\':
					mir[i].dir = '/';
					break;
			}
		}
	}
}

int Move(char** field, int h, int w, Position &p, vector<Position> &box, vector<Mirror> &mir){
	char input;
	cout << "Move: ";
	cin >> input;
	Position d;
	switch (input){
		case 'w': case 'W':
			d = {-1,0};
			Push(field,p,d,box,mir);
			break;
		case 'a': case 'A':
			d = {0,-1};
			Push(field,p,d,box,mir);
			break;
		case 's': case 'S':
			d = {1, 0};
			Push(field,p,d,box,mir);
			break;
		case 'd': case 'D':
			d = {0, 1};
			Push(field,p,d,box,mir);
			break;
		case 'r':
			Rotate(field,p,mir);
			break;
		case 'q':
			EndGame(field,h,w);
			break;
		case 'k':
			return 0;
		default:
			cout << "Invalid input." << endl;
	}
	return 1;
}

int main(){
	// open file
	char lv;
	string filename = "x.txt";
	cout << "Level: ";
	cin >> lv;
	filename[0] = lv;
	cout << "loading " << filename << endl;
	ifstream fin;
	fin.open(filename);
	if (fin.fail()){
		cout << "Error in file opening" << endl;
		exit(1);
	}

	// initiate map
	int height;
	int width;
	char** field;

	string line;
	fin.ignore(100,'\n');
	fin >> height >> width;
	fin.ignore(100,'\n');

	fin.ignore(100,'\n');
	field = new char*[height];
	for (int i=0; i<height; i++){
		field[i] = new char[width];
		getline(fin,line);
		for (int j=0; j<width; j++){
			field[i][j] = line[j];
		}
	}

	// spawn player
	fin.ignore(100,'\n');
	Position p;
	fin >> p.y >> p.x;
	fin.ignore(100,'\n');
	field[p.y][p.x] = 'P';

	// spawn boxes
	fin.ignore(100,'\n');
	int n;
	fin >> n;
	fin.ignore(100,'\n');
	vector<Position> box;
	for (int i=0; i<n; i++){
		Position temp;
		fin >> temp.y >> temp.x;
		box.push_back(temp);
		field[temp.y][temp.x] = 'B';
		fin.ignore(100,'\n');
	}

	// spawn mirrors
	fin.ignore(100,'\n');
	fin >> n;
	fin.ignore(100,'\n');
	vector<Mirror> mir;
	for (int i=0; i<n; i++){
		Mirror temp;
		fin >> temp.pos.y >> temp.pos.x >> temp.dir;
		mir.push_back(temp);
		fin.ignore(100,'\n');
	}

	// spawn lasers
	fin.ignore(100,'\n');
	fin >> n;
	fin.ignore(100,'\n');
	vector<Laser> las;
	for (int i=0; i<n; i++){
		Laser temp;
		fin >> temp.pos.y >> temp.pos.x >> temp.dir.y >> temp.dir.x >> temp.on;
		las.push_back(temp);
		fin.ignore(100,'\n');
	}

	// spawn buttons
	fin.ignore(100,'\n');
	fin >> n;
	fin.ignore(100,'\n');
	vector<Button> but;
	for (int i=0; i<n; i++){
		Button temp;
		fin >> temp.pos.y >> temp.pos.x >> temp.func >> temp.targ.y >> temp.targ.x;
		temp.on = 0;
		but.push_back(temp);
		fin.ignore(100,'\n');
	}

	// spawn gate
	fin.ignore(100,'\n');
	Gate gat;
	fin >> gat.pos.y >> gat.pos.x >> gat.on;

	// initial print
	UpdateField(field, height, width, p, box, mir, las, but, gat);
	PrintMap(field, height, width);

	// game
	while (Move(field, height, width, p, box, mir)){
		UpdateField(field, height, width, p, box, mir, las, but, gat);
		PrintMap(field, height, width);
		if (p.y == gat.pos.y && p.x == gat.pos.x && gat.on){
			cout << "you win!" << endl;
			break;
		}
	}

	// saving
	ofstream fout;
	fout.open("save.txt");
	if (fout.fail()){
		cout << "Error in file opening" << endl;
		exit(1);
	}

	fout << "size" << endl;
	fout << height << ' ' << width << endl;
	fout << "map" << endl;
	for (int i=0; i<height; i++){
		fout << field[i] << endl;
	}
	fout << "player (y, x)" << endl;
	fout << p.y << ' ' << p.x << endl;
	fout << "boxes (y, x)" << endl;
	fout << box.size() << endl;
	for (int i=0; i<box.size(); i++)
		fout << box[i].y << ' ' << box[i].x << endl;
	fout << "mirrors (y, x, initial direction)" << endl;
	fout << mir.size() << endl;
	for (int i=0; i<mir.size(); i++)
		fout << mir[i].pos.y << ' ' << mir[i].pos.x << ' ' << mir[i].dir << endl;
	fout << "lasers (y, x, direction (y,x), status)" << endl;
	fout << las.size() << endl;
	for (int i=0; i<las.size(); i++)
		fout << las[i].pos.y << ' ' << las[i].pos.x << ' ' << las[i].dir.y << ' ' << las[i].dir.x << ' ' << las[i].on << endl;
	fout << "button (y, x, function, at y, x)" << endl;
	fout << but.size() << endl;
	for (int i=0; i<but.size(); i++)
		fout << but[i].pos.y << ' ' << but[i].pos.x << ' ' << but[i].func << ' ' << but[i].targ.y << ' ' << but[i].targ.x << endl;
	fout << "gate (y, x, status)" << endl;
	fout << gat.pos.y << ' ' << gat.pos.x << ' ' << gat.on << endl;


	// cleanup
	EndGame(field, height, width);
	return 0;
}
