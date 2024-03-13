// a class that contains UI of tic tac toe game
#include <vector>

class Display {
public:
   
   // constructor. sets size of board to user input
   Display(int size);
   
   // destructor
   ~Display();

   // This function handles the printing of the current state of the board
   void print_board(std::vector<std::vector<int>>& state);
   

// member variables
private:
   int size; // Size of tic tac toe board
};