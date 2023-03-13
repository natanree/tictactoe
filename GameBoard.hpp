#pragma once
#include <vector>
#include <iostream>

class GameBoard
{
    public:
    GameBoard();

    void resetBoard();

    std::vector<char>& getBoard(void);

    private:
    std::vector<char> mBoard;
};