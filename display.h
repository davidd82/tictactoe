// a class that contains UI of tic tac toe game
class Display {
public:
   
   // constructor. maxlen must be as large as the total number
   // of Locations that will ever be entered into this Queue.
   Display(int maxlen);
   
   // destructor. releases resources. C++ will call it automatically.
   ~Display();
   


   // member variables of an Queue, for implementation:
private:
   int tail; // how many Locations were added so far?
             // (index of next free item at the end)
   int head; // how many Locations were extracted so far?
             // (index of the first occupied location)
};