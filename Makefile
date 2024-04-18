FLAGS = -pedantic-errors -std=c++11

animations.o: include/animations.h src/animations.cpp
	g++ $(FLAGS) -c src/animations.cpp -o animations.o

invalid_input_screen.o: include/invalid_input_screen.h src/invalid_input_screen.cpp
	g++ $(FLAGS) -c src/invalid_input_screen.cpp -o invalid_input_screen.o

menu_screen.o: include/menu_screen.h include/invalid_input_screen.h src/menu_screen.cpp
	g++ $(FLAGS) -c src/menu_screen.cpp -o menu_screen.o

gameplay.o: include/gameplay.h include/animations.h src/gameplay.cpp
	g++ $(FLAGS) -c src/gameplay.cpp -o gameplay.o

main.o: include/animations.h include/menu_screen.h include/gameplay.h src/main.cpp
	g++ $(FLAGS) -c src/main.cpp -o main.o

game: animations.o invalid_input_screen.o menu_screen.o gameplay.o main.o
	g++ $(FLAGS) $^ -o $@
