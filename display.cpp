/*
display.cpp
*/

#include "display.h"
#include <iostream>


Display::Display(int size_) {
    size = size_;
}

//Destructor. releases resources. C++ will call it automatically.
Display::~Display() {

}

// This function handles the printing of the current state of the board
void Display::print_board()
{
    // This for loop will build the first n-1 rows because the last row will not have "_____" at the bottom
    // The last row is a special case/row
    // One iteration of the for loop equates to one row being printed
    for (int i = 0; i < size-1; i++) {
        // Top part of the row being printed
        std::cout << "     |";
        for (int i = 0; i < size - 2; i++) {
            std::cout << "     |";
        }
        std::cout << "     " << std::endl;

        // Middle part of the row being printed
        // The for loop will need to decide wether to print an X or an O
        std::cout << "     |";
        for (int i = 0; i < size - 2; i++) {
            std::cout << "     |";
        }
        std::cout << "     " << std::endl;
        
        // Bottom part of the row being printed
        std::cout << "_____+";
        for (int i = 0; i < size - 2; i++) {
            std::cout << "_____+";
        }
        std::cout << "_____" << std::endl;
    } 
    
    // The final row will need to be printed outside of the for loop because the bottom has no "_____"
    // Top part of the row being printed
    std::cout << "     |";
        for (int i = 0; i < size - 2; i++) {
            std::cout << "     |";
        }
    std::cout << "     " << std::endl;

    // Middle part of the row being printed
    // The for loop will need to decide wether to print an X or an O
    std::cout << "     |";
        for (int i = 0; i < size - 2; i++) {
            std::cout << "     |";
        }
    std::cout << "     " << std::endl;

    // Bottom part of the row being printed
    for (int i = 0; i < size - 1; i++) {
        std::cout << "     +";
    }
    std::cout << "     " << std::endl;
    
    /* Example of how board will look after printing
    "     |     |      "  
    "  X  |  X  |  X   "  
    "_____+_____+_____ "
    "     |     |      "  
    "  X  |  X  |  X   "  
    "_____+_____+_____ "
    "     |     |      "  
    "  X  |  X  |  X   "  
    "     +     +      "
    */
}



