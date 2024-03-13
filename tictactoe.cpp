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

    cout << "1: 3 X 3" << endl;
    cout << "2: 4 X 4" << endl;
    cout << "3: 5 X 5" << endl;
    cout << "4: 6 X 6" << endl;
    cout << "5: 7 X 7" << endl;

    int size_choice = 0;
    cout << "Choose size of tic tac toe board:" << endl;
    cin >> size_choice;

    Display board(sizes[size_choice - 1]);

    board.print_board();


    return 0;
}

/**************************************************
 * Attempt to find shortest path and return:
 *  1 if successful
 *  0 if no path exists
 *
 * If path is found fill it in with '*' characters
 *  but don't overwrite the 'S' and 'F' cells
 * NOTE: don't forget to deallocate memory in here too!
 *************************************************/


