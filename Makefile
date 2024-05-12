all: hash

hash: tictactoe.cpp tictactoe.h display.cpp display.h main_menu.cpp main_menu.h
	g++ -g -Wall -std=c++17 tictactoe.cpp display.cpp main_menu.cpp -o test

.PHONY: clean

clean:
	rm -f test