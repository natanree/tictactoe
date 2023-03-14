#pragma once
#include <vector>
#include <iostream>

class GameBoard
{
    public:
    GameBoard();

    void resetBoard();

    std::vector<char>& getBoard(void);

    void playerTurn(char symbol);

    void displayBoard(void);

    private:
    std::vector<char> mBoard;
};