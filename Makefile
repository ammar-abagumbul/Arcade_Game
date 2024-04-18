FLAGS = -pedantic-errors -std=c++11

animations.o: include/animations.h src/animations.cpp
	g++ $(FLAGS) -c src/animations.cpp -o animations.o

main.o: include/animations.h src/main.cpp
	g++ $(FLAGS) -c src/main.cpp -o main.o

game: animations.o main.o
	g++ $(FLAGS) $^ -o $@
