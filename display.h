// a class that contains UI of tic tac toe game
class Display {
public:
   
   // constructor. maxlen must be as large as the total number
   // of Locations that will ever be entered into this Queue.
   Display(int size);
   
   // destructor. releases resources. C++ will call it automatically.
   ~Display();

   // This function handles the printing of the current state of the board
   void print_board();
   


   // member variables of an Queue, for implementation:
private:
   int size; // Size of tic tac toe board
};