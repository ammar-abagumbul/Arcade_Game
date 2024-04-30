CC = g++

FLAGS = -pedantic-errors -std=c++11


# Compilations for Sliding Block

SLIDING_DEPS = src/slidingblock/board.h src/slidingblock/move.h src/slidingblock/game.h src/slidingblock/menu.h
SLIDING_OBJ = sliding_game.o sliding_board.o sliding_move.o	sliding_menu.o

sliding_menu.o: src/slidingblock/menu.cpp $(SLIDING_DEPS)
	$(CC) $(FLAGS) -c src/slidingblock/menu.cpp -o sliding_menu.o

sliding_game.o: src/slidingblock/game.cpp $(SLIDING_DEPS)
	$(CC) $(FLAGS) -c src/slidingblock/game.cpp -o sliding_game.o

sliding_board.o: src/slidingblock/board.cpp $(SLIDING_DEPS)
	$(CC) $(FLAGS) -c src/slidingblock/board.cpp -o sliding_board.o

sliding_move.o: src/slidingblock/move.cpp $(SLIDING_DEPS)
	$(CC) $(FLAGS) -c src/slidingblock/move.cpp -o sliding_move.o


# Compilation of minesweeper

minesweeper_game.o: src/minesweeper/minesweeper.cpp src/minesweeper/minesweeper.h
	$(CC) $(FLAGS) -c src/minesweeper/minesweeper.cpp -o minesweeper_game.o


# Compilation of bokosan

bokosan_game.o: src/bokosan/3.cpp src/bokosan/3.h
	$(CC) $(FLAGS) -c src/bokosan/3.cpp -o bokosan_game.o


# Compilation of pacman

PACMAN_DEPS = src/pacman/include/GameObject.h src/pacman/include/Game.h src/pacman/include/Player.h src/pacman/include/Direction.h src/pacman/include/Map.h src/pacman/include/Ghost.h src/pacman/include/Navigator.h

# pacman_main.o: src/pacman/src/Main.cpp $(PACMAN_DEPS)
# 	$(CC) $(FLAGS) -c src/pacman/src/Main.cpp -o pacman_main.o

pacman_game.o: src/pacman/src/Game.cpp $(PACMAN_DEPS)
	$(CC) $(FLAGS) -c src/pacman/src/Game.cpp -o pacman_game.o

pacman_player.o: src/pacman/src/Player.cpp $(PACMAN_DEPS)
	$(CC) $(FLAGS) -c src/pacman/src/Player.cpp -o pacman_player.o

pacman_ghost.o: src/pacman/src/Ghost.cpp $(PACMAN_DEPS)
	$(CC) $(FLAGS) -c src/pacman/src/Ghost.cpp -o pacman_ghost.o

pacman_navigator.o: src/pacman/src/Navigator.cpp $(PACMAN_DEPS)
	$(CC) $(FLAGS) -c src/pacman/src/Navigator.cpp -o pacman_navigator.o

pacman_map.o: src/pacman/src/Map.cpp $(PACMAN_DEPS)
	$(CC) $(FLAGS) -c src/pacman/src/Map.cpp -o pacman_map.o


# Compilation of main part

animations.o: include/animations.h src/animations.cpp
	$(CC) $(FLAGS) -c src/animations.cpp -o animations.o

invalid_input_screen.o: include/invalid_input_screen.h src/invalid_input_screen.cpp
	$(CC) $(FLAGS) -c src/invalid_input_screen.cpp -o invalid_input_screen.o

menu_screen.o: include/menu_screen.h include/invalid_input_screen.h src/menu_screen.cpp
	$(CC) $(FLAGS) -c src/menu_screen.cpp -o menu_screen.o

gameplay.o: include/gameplay.h include/animations.h src/gameplay.cpp src/slidingblock/game.h src/minesweeper/minesweeper.h src/bokosan/3.h src/pacman/include/Navigator.h
	$(CC) $(FLAGS) -c src/gameplay.cpp -o gameplay.o

main.o: include/animations.h include/menu_screen.h include/gameplay.h src/main.cpp
	$(CC) $(FLAGS) -c src/main.cpp -o main.o

game: sliding_menu.o sliding_game.o sliding_board.o sliding_move.o minesweeper_game.o bokosan_game.o pacman_game.o pacman_player.o pacman_ghost.o pacman_navigator.o pacman_map.o animations.o invalid_input_screen.o menu_screen.o gameplay.o main.o
	$(CC) $(FLAGS) $^ -o $@ -lncurses
