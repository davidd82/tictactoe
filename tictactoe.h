#include "display.h"
#include <vector>

bool validMove(int row, int col, std::vector<std::vector<int>>& state, int size);

bool checkWinner(int row, int col, std::vector<std::vector<int>>& state, int size, int player);

bool computerMove(std::vector<std::vector<int>>& state, int size, int player, Display& board);