/*
display.cpp
*/

#include "display.h"
#include <iostream>
#include <vector>

// Sets size data member to user input
Display::Display(int size_) {
    size = size_;
}

//Destructor. releases resources
Display::~Display() {

}

// This function handles the printing of the current state of the board
void Display::print_board(std::vector<std::vector<int>> *state)
{
    // Adds column coordinates at the top
    std::cout << " ";
    for (int i = 0; i < size; i++) {
        std::cout << "  " << i << "   ";
    }
    std::cout << std::endl;

    // This for loop will build the first n-1 rows because the last row will not have "_____" at the bottom
    // The last row is a special case/row
    // One iteration of the for loop equates to one row being printed
    for (int i = 0; i < size-1; i++) {
        // Top part of the row being printed
        std::cout << "      |";
        for (int j = 0; j < size - 2; j++) {
            std::cout << "     |";
        }
        std::cout << "     " << std::endl;

        // Middle part of the row being printed
        // The for loop will need to decide wether to print an X or an O
        // Also prints row coordinates
        if (std::vector<std::vector<int>>(*state)[i][0] == 0) {
            std::cout << i << "     |";
        } else if (std::vector<std::vector<int>>(*state)[i][0] == 1) {
            std::cout << i << "  X  |";
        } else if (std::vector<std::vector<int>>(*state)[i][0] == 2) {
            std::cout << i << "  O  |";
        }

        for (int j = 0; j < size - 2; j++) {
            if (std::vector<std::vector<int>>(*state)[i][j + 1] == 0) {
                std::cout << "     |";
            } else if (std::vector<std::vector<int>>(*state)[i][j + 1] == 1) {
                std::cout << "  X  |";
            } else if (std::vector<std::vector<int>>(*state)[i][j + 1] == 2) {
                std::cout << "  O  |";
            }
        }

        if (std::vector<std::vector<int>>(*state)[i][size - 1] == 0) {
            std::cout << "     " << std::endl;
        } else if (std::vector<std::vector<int>>(*state)[i][size - 1] == 1) {
            std::cout << "  X  " << std::endl;
        } else if (std::vector<std::vector<int>>(*state)[i][size - 1] == 2) {
            std::cout << "  O  " << std::endl;
        }
        
        // Bottom part of the row being printed
        std::cout << " _____+";
        for (int j = 0; j < size - 2; j++) {
            std::cout << "_____+";
        }
        std::cout << "_____" << std::endl;
    } 
    
    // The final row will need to be printed outside of the for loop because the bottom has no "_____"
    // Top part of the row being printed
    std::cout << "      |";
        for (int i = 0; i < size - 2; i++) {
            std::cout << "     |";
        }
    std::cout << "     " << std::endl;

    // Middle part of the row being printed
    // The for loop will need to decide wether to print an X or an O
    if (std::vector<std::vector<int>>(*state)[size - 1][0] == 0) {
        std::cout << size - 1 << "     |";
    } else if (std::vector<std::vector<int>>(*state)[size - 1][0] == 1) {
        std::cout << size - 1 << "  X  |";
    } else if (std::vector<std::vector<int>>(*state)[size - 1][0] == 2) {
        std::cout << size - 1 << "  O  |";
    }

    for (int i = 0; i < size - 2; i++) {
        if (std::vector<std::vector<int>>(*state)[size - 1][i + 1] == 0) {
            std::cout << "     |";
        } else if (std::vector<std::vector<int>>(*state)[size - 1][i + 1] == 1) {
            std::cout << "  X  |";
        } else if (std::vector<std::vector<int>>(*state)[size - 1][i + 1] == 2) {
            std::cout << "  O  |";
        }
    }

    if (std::vector<std::vector<int>>(*state)[size - 1][size - 1] == 0) {
        std::cout << "     " << std::endl;
    } else if (std::vector<std::vector<int>>(*state)[size - 1][size - 1] == 1) {
        std::cout << "  X  " << std::endl;
    } else if (std::vector<std::vector<int>>(*state)[size - 1][size - 1] == 2) {
        std::cout << "  O  " << std::endl;
    }
    
    // Bottom part of the row being printed
    std::cout << " ";
    for (int i = 0; i < size - 1; i++) {
        std::cout << "     +";
    }
    std::cout << "     " << std::endl;
    
    /* Example of how board will look after printing
    "   0     1     2  "
    "      |     |     "  
    "0  X  |  X  |  X  "  
    " _____+_____+_____"
    "      |     |     "  
    "1  X  |  X  |  X  "  
    " _____+_____+_____"
    "      |     |     "  
    "2  X  |  X  |  X  "  
    "      +     +     "
    */
}



