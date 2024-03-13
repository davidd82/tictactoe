/*
display.cpp
*/

#include "display.h"
#include <iostream>

// Sets size data member to user input
Display::Display(int size_) {
    size = size_;
}

//Destructor. releases resources
Display::~Display() {

}

// This function handles the printing of the current state of the board
void Display::print_board()
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
        std::cout << i << "     |";
        for (int j = 0; j < size - 2; j++) {
            std::cout << "     |";
        }
        std::cout << "     " << std::endl;
        
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
    std::cout << size - 1 << "     |";
        for (int i = 0; i < size - 2; i++) {
            std::cout << "     |";
        }
    std::cout << "     " << std::endl;

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



