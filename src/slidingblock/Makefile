// This is the Makefile for the 8tile game

CFLAGS = -pedantic-errors -std=c++11

DEPS = board.h map.h

OBJ = game.o board.o move.o

game: $(OBJ)
	g++ $(CFLAGS) -o game $(OBJ)

game.o: game.cpp $(DEPS)
	g++ $(CFLAGS) -c game.cpp


board.o: board.cpp $(DEPS)
	g++ $(CFLAGS) -c board.cpp

move.o: move.cpp $(DEPS)
	g++ $(CFLAGS) -c move.cpp

clean:
	rm -f game.o board.o move.o game

.PHONY: clean
