FLAGS = -pedantic-errors -std=c++11


SLIDING_DEPS = src/slidingblock/board.h src/slidingblock/move.h src/slidingblock/game.h
SLIDING_OBJ = sliding_game.o sliding_board.o sliding_move.o

sliding_game.o: src/slidingblock/game.cpp $(SLIDING_DEPS)
	g++ $(FLAGS) -c src/slidingblock/game.cpp -o sliding_game.o

sliding_board.o: src/slidingblock/board.cpp $(SLIDING_DEPS)
	g++ $(FLAGS) -c src/slidingblock/board.cpp -o sliding_board.o

sliding_move.o: src/slidingblock/move.cpp $(SLIDING_DEPS)
	g++ $(FLAGS) -c src/slidingblock/move.cpp -o sliding_move.o



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

game: animations.o invalid_input_screen.o menu_screen.o gameplay.o main.o sliding_game.o sliding_board.o sliding_move.o
	g++ $(FLAGS) $^ -o $@
