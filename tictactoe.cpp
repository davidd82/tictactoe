/*
tictactoe.cpp
*/

#include <iostream>
#include <vector>
#include "tictactoe.h"
#include "display.h"

using namespace std;

// Prototype for maze_search, which you will fill in below.

// main function to read, solve maze, and print result
int main(int argc, char* argv[]) {
    vector<int> sizes = {3,4,5,6,7};

    // Dynamically allocate 2D vector to hold state of tictactoe board
    vector<vector<int>> *state;

    // Prints the board size options for the user
    cout << "1: 3 X 3" << endl;
    cout << "2: 4 X 4" << endl;
    cout << "3: 5 X 5" << endl;
    cout << "4: 6 X 6" << endl;
    cout << "5: 7 X 7" << endl;

    int size_choice = 0;

    // Asks for user input on board size
    cout << "Choose size of tic tac toe board:" << endl;
    cin >> size_choice;

    // If statement handles invalid user inputs
    if ((size_choice < 1) || (size_choice > 5)) {
        size_choice = 1;
    }

    // Sets size of 2D array
    state = new vector<vector<int>>(sizes[size_choice - 1]);

    // initializes each cell to a 0 to mean empty
    for (int i = 0; i < sizes[size_choice - 1]; i++) {
        for (int j = 0; j < sizes[size_choice - 1]; j++) {
            (*state)[i].push_back(0);
        }
    }

    Display board(sizes[size_choice - 1]);

    board.print_board(state);
    bool winner = false;

    while (!winner) {
        int row = 0;
        int column = 0;
        cout << "Enter row and then column coordinate to make a move" << endl;
        cin >> row;
        cin >> column; 

        // Check if user input is a valid move
        // TODO

        (*state)[row][column] = 1;
        board.print_board(state);
    }
    return 0;
}

/**************************************************
 2D vector to hold data for what spaces have X's and
 which ones have O's
 *************************************************/


