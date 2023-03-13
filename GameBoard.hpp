#pragma once
#include <vector>

class GameBoard
{
    public:
    GameBoard();

    void resetBoard();

    private:
    std::vector<char> mBoard;
};