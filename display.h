// a class that contains UI of tic tac toe game
class Display {
public:
   
   // constructor. sets size of board to user input
   Display(int size);
   
   // destructor
   ~Display();

   // This function handles the printing of the current state of the board
   void print_board();
   

// member variables
private:
   int size; // Size of tic tac toe board
};