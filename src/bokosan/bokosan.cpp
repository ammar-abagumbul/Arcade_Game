#include <iostream>
#include <fstream>
#include <vector>

#include "bokosan.h"

#include "ncurses.h"

using namespace std;

bool bokosanGameOver = false;

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
	// Prints the map
	
	// Inputs:
	// char** field: 2d array with symbols representing objects in the map
	// int h: height of map
	// int w: width of map

	clear(); // Clears the screen
	printw("\n\n\n\n\n");

	for (int i=0; i<h; i++){
		for (int j=0; j<w; j++){
			if (j == 0){
				printw("                                             %c", field[i][j]);
			}else{
				printw("%c", field[i][j]);
			}
		}

		switch(i){
		case 1: printw(R"(  * = wall)"); break;
		case 2: printw("  P = player (Objective: Enter Gate)"); break;
		case 3: printw("  B = box"); break;
		case 4: printw("  / \\ = mirror"); break;
		case 5: printw(R"(  - | + = laser (DANGER))"); break;
		case 6: printw("  X = closed gate "); break;
		case 7: printw("  O = open gate"); break;
		case 8: printw(R"(  # = button (light sensitive, opens gate))"); break;
		}

		printw("\n");
	}
	refresh();
}

void EndGame(char** field, int h, int w){
	// Frees memory from field** and ends game
	
	// Inputs:
	// char** field: 2d array with symbols representing objects in the map
	// int h: height of map
	// int w: width of map
	
	for (int i=0; i<h; i++)
        	delete[] field[i];
	delete[] field;
}

void TracePath(char** field, int h, int w, Position i, Position d){
	// Draws laser on field. Detects if laser kills player
	
	// Inputs:
	// char** field: 2d array with symbols representing objects in the map
	// int h: height of map
	// int w: width of map
	// Position i: Position of the current section of laser
	// Position d: The direction the laser is heading

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
			printw("\nYou died :(\n");
			refresh();
			napms(1500);
			bokosanGameOver = true;
			break;
	}
	return;
}

int CheckButton(char** field, Button &but, vector<Laser> &las, Gate &gat){
	// Checks if button is "pressed" by laser
	
	// Inputs:
	// char** field: 2d array with symbols representing objects in the map
	// Button &but: Reference pass of the single button being called in this function
	// vector<Laser> &las: Reference pass of lasers in the map
	// Gate &gat: Reference pass of the single gate in the map
	
	// Output: int used to update map if the button is activated so the gate opens ast the same time as the button's activation. 

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
	// Clears the field into nothing but walls and iterates through
	// all object vectors to add them again with their updated positions
	
	// Inputs:
	// char** field: 2d array with symbols representing objects in the map
	// int h: height of map
	// int w: width of map
	// Position p: position of the player
	// vector<Position> box: vector of all boxes
	// vector<Mirror> mir: vector of all mirrors
	// vector<Laser> &las: reference pass of vector of all lasers
	// vector <Button> &but: reference pass of vector of all buttons
	// Gate &gat: Reference pass of the single gate in the map

	// Clear field
	for (int i=0; i<h; i++)
		for (int j=0; j<w; j++)
			if (field[i][j] != '*') field[i][j] = ' ';

	// Redraw elements from positions and other status
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
		if (bokosanGameOver){
			return;
		}
	}

	for (int i=0; i<but.size(); i++){
		if (CheckButton(field, but[i], las, gat))
			UpdateField(field, h, w, p, box, mir, las, but, gat);
	}
}

bool Push(char** field, Position &p, Position d, vector<Position> &box, vector<Mirror> &mir){
	// Checks the block ahead and decides if it's possible to push

	// Inputs:
	// char** field: 2d array with symbols representing objects in the map
	// Position p: position of the player
	// Position d: proposed direction of movement
	// vector<Position> &box: reference pass of vector of all boxes
	// vector<Mirror> &mir: reference pass of vector of all mirrors

	switch (field[p.y+d.y][p.x+d.x]){
		case '*': case '>': case '<': case '#':
			return 0;
			break;
		case 'B': // box
			for (int i=0; i<box.size(); i++){
				if (box[i].y == p.y+d.y && box[i].x == p.x+d.x && Push(field, box[i], d, box, mir)){
					p.y += d.y;
					p.x += d.x;
					return 1;
				}
			}
			break;
		case '/': case '\\': // mirror
			for (int i=0; i<mir.size(); i++){
				if (mir[i].pos.y == p.y+d.y && mir[i].pos.x == p.x+d.x && Push(field, mir[i].pos, d, box, mir)){
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
  // takes an integer and returns its absolute value
  return v * ((v>0) - (v<0));
}

void Rotate(char** field, Position p, vector<Mirror> &mir){
	// Allows user to rotate a mirror

	// Inputs:
	// char** field: 2d array with symbols representing objects in the map=
	// Position p: position of the player=
	// vector<Mirror> &mir: reference pass of vector of all mirrors=

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
	// Takes an input and calls other functions based on input

	// Inputs:
	// char** field: 2d array with symbols representing objects in the map
	// int h: height of map
	// int w: width of map
	// Position &p: reference pass of position of the player
	// vector<Position> &box: reference pass of vector of all boxes

	// Output: int that stops the game if 0

	printw("                                [w][a][s][d] Travel  [r] Rotate\n");
	printw("                                [1] Quit             [2] Save & Quit\n");
	refresh();
	
	int input;
	bool br = false;
	Position d;

	while (!br){
		input = getch();
		br = true;

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
			case '1':
				bokosanGameOver = true;
				break;
			case '2':
				return 0;
			default:
				br = false;
		}
	}

	return 1;
}

void BokosanDisplayMenu(int choice, bool resumeAvailable)
{
	// This function outputs the entire main menu as well as the options available

    // Terminal cleared to improve user experience
    clear();

	// Header message
    printw("\n\n\n\n\n");
    printw("                                               THE ARMORY ARSENAL\n\n");

	// First choice is highlighted if it is the current option
    printw("                                                   ");
    if (choice == 1)
        attron(A_REVERSE);
    printw("NEW GAME");
    printw("\n");
    if (choice == 1)
        attroff(A_REVERSE);
    
	// First checks if saved file exists
    if (resumeAvailable)
    {
		// Choice is highlighted if it is the current option
        printw("                                                   ");
        if (choice == 2)
            attron(A_REVERSE);
        printw("RESUME GAME");
        printw("\n");
        if (choice == 2)
            attroff(A_REVERSE);
    }

    // Choice is highlighted if it is the current option
    printw("                                                   ");
    if (choice == 3 || (!resumeAvailable && choice == 2))
        attron(A_REVERSE);
    printw("EXIT");
    printw("\n");
    if (choice == 3 || (!resumeAvailable && choice == 2))
        attroff(A_REVERSE);
}

int BokosanShowMenuScreen(bool resumeAvailable)
{
    // This function handles the main flow of the main menu and returns
    // which option was selected

    using namespace std;

	// Initially first option is chosen
    int optionChosen = 1;
    BokosanDisplayMenu(optionChosen, resumeAvailable);

    while(true)
    {
        bool br = false;	
        int c = getch();

        switch(c)
        {	
            case KEY_UP:
                if(optionChosen == 1 && resumeAvailable){
					// If RESUME GAME is available and current
	                // option is first option

                    optionChosen = 3;
                }
                else if (optionChosen == 1){
                    optionChosen = 2;
                }
                else{
                    --optionChosen;
                }
                break;
            case KEY_DOWN:
                if(optionChosen == 3){
                    optionChosen = 1;
                }else if (optionChosen == 2 && !resumeAvailable){
                    optionChosen = 1;
                }
                else {
                    ++optionChosen;
                }
                break;
            case 10:
				// ENTER
                return optionChosen;
                break;
            default:
                continue;
        }

        BokosanDisplayMenu(optionChosen, resumeAvailable);  
    }

    return optionChosen;
}

int playBokosan(){
	// Main function setting up the game
	// and handling the main game flow

	bokosanGameOver = false;
	clear();

	// Checks if there is a savefile and makes main  menu based on it
	ifstream testSave;
	int menu;
	string filename;
	testSave.open("./user_cache/bokosan_save.txt");

	if (testSave.fail()){
		menu = BokosanShowMenuScreen(false);
		switch (menu){
			case 1:
				filename = "./maps/1.txt";
				break;
			case 2:
				printw("Bye bye \n");
				refresh();
				return 0;
		}
	} else{
		menu = BokosanShowMenuScreen(true);
		switch (menu){
			case 2:
				filename = "./user_cache/bokosan_save.txt";
				break;
			case 1:
				filename = "./maps/1.txt";
				break;
			case 3:
				printw("Bye bye \n");
				refresh();
				return 0;
		}
	}
	testSave.close();

	// Open the file accordingly
	printw("loading %s\n", filename.c_str());
	refresh();
	ifstream fin;
	fin.open(filename);

	if (fin.fail()){
		printw("Error in file opening\n");
		refresh();
		napms(1000);
		return 0;
	}

	// Initiate map
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

	// Spawn player
	fin.ignore(100,'\n');
	Position p;
	fin >> p.y >> p.x;
	fin.ignore(100,'\n');
	field[p.y][p.x] = 'P';

	// Spawn boxes
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

	// Spawn mirrors
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

	// Spawn lasers
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

	// Spawn buttons
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

	// Spawn gate
	fin.ignore(100,'\n');
	Gate gat;
	fin >> gat.pos.y >> gat.pos.x >> gat.on;
	
	fin.close();

	// Initial print of the field
	UpdateField(field, height, width, p, box, mir, las, but, gat);
	PrintMap(field, height, width);

	// Main game
	while (Move(field, height, width, p, box, mir)){
		if (bokosanGameOver){
			EndGame(field, height, width);
			return 2;
		}

		UpdateField(field, height, width, p, box, mir, las, but, gat);
		if (bokosanGameOver){
			EndGame(field, height, width);
			return 2;
		}

		PrintMap(field, height, width);
		if (p.y == gat.pos.y && p.x == gat.pos.x && gat.on){
			printw("you win!\n");
			refresh();
			napms(2000);
			return 1;
		}
	}

	// Saving
	ofstream fout("./user_cache/bokosan_save.txt");

	// Saving process

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

	// Saving complete, close the file
	fout.close();

	// cleanup
	EndGame(field, height, width);
	return 2;
}
