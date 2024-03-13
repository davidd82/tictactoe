/*
tictactoe.cpp
*/

#include <iostream>
#include <vector>
#include "tictactoe.h"
#include "display.h"

using namespace std;

int main(int argc, char* argv[]) {
    // Stores all possible sizes for the tic tac toe board
    vector<int> sizes = {3,4,5,6,7};

    // Dynamically allocate 2D vector to hold state of tic tac toe board
    vector<vector<int>> *state;

    // Prints the board size options for the user
    cout << "1: 3 X 3" << endl;
    cout << "2: 4 X 4" << endl;
    cout << "3: 5 X 5" << endl;
    cout << "4: 6 X 6" << endl;
    cout << "5: 7 X 7" << endl;

    // Asks for user input on board size
    int size_choice = 0;
    cout << "Choose size of tic tac toe board:" << endl;
    cin >> size_choice;

    // If statement handles invalid user inputs
    if ((size_choice < 1) || (size_choice > 5)) {
        size_choice = 1;
    }

    // Sets size of 2D array
    int size = 0;
    size = sizes[size_choice - 1];
    state = new vector<vector<int>>(size);


    // initializes each cell to a 0 to mean empty
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            (*state)[i].push_back(0);
        }
    }

    // Create instance of board display
    Display board(size);

    // Print an empty board to start game
    // winner is false
    // X is player 1 and 2 is computer 
    board.print_board(state);
    bool winner = false;
    int player = 1;

    // While there is no winner yet
    // Keep playing the game
    while (!winner) {
        // Ask user for the row and column of their move
        int row = 0;
        int column = 0;
        cout << "Enter row and then column coordinate to make a move" << endl;
        cin >> row;
        cin >> column; 

        // Check if user input is a valid move
        if(!validMove(row, column, state, size)) {
            cout << "Move invalid! Try another location..." << endl;
            continue;
        }

        // Update the state of the board
        // Print the newly updated board
        (*state)[row][column] = 1;
        board.print_board(state);

        // Check if the most recent move creates a win for the human player
        if (checkWinner(row, column, state, size, player)) {
            cout << "Player " << player << " Wins!" << endl;
        }

        //TODO
        // Let computer make a random move
        // Check if computer wins
    }
    return 0;
}

// This function checks if the player input is even a valid move
bool validMove(int row, int col, std::vector<std::vector<int>> *state, int size)
{
    // If the location is out of bounds
    if (row > size - 1) {
        return false;
    }

    if (col > size - 1) {
        return false; 
    }

    // If the location is already taken
    if ((*state)[row][col] != 0) {
        return false;
    }
    return true;
}

// This function checks if most recent move results in a win
bool checkWinner(int row, int col, std::vector<std::vector<int>> *state, int size, int player)
{
    // Check horizontal win
    int count = 0;

    // Check right side of the column
    int temp_col = col;
    while (temp_col + 1 <= size - 1) {
        temp_col = temp_col + 1;
        if ((*state)[row][temp_col] == player) {
            count++;
        }
    }

    // Check left side of the column
    temp_col = col;
    while (temp_col - 1 >= 0) {
        temp_col = temp_col - 1;
        if ((*state)[row][temp_col] == player) {
            count++;
        }
    }
    temp_col = col;

    // Increment count by one to also count the most recent move
    count++;

    // If a row is all filled out then player is the winner
    if (count == size) {
        return true;
    }

    // Check vertical win
    count = 0;

    // Check above the row
    int temp_row = row;
    while (temp_row - 1 >= 0) {
        temp_row = temp_row - 1;
        if ((*state)[temp_row][col] == player) {
            count++;
        }
    }

    // Check bottom of the row
    temp_row = row;
    while (temp_row + 1 <= size - 1) {
        temp_row = temp_row + 1;
        if ((*state)[temp_row][col] == player) {
            count++;
        }
    }

    // Increment count by one to also count the most recent move
    count++;

    // If a column is all filled out then player is the winner
    if (count == size) {
        return true;
    }
    
    return false;
}
