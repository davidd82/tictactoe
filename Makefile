all: hash

hash: tictactoe.cpp tictactoe.h display.cpp display.h
	g++ -g -Wall -std=c++17 tictactoe.cpp display.cpp -o test

.PHONY: clean

clean:
	rm -f test