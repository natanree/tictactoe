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

    bool checkForWin(void);

    private:
    std::vector<char> mBoard;

    bool verticalWinHelper(void);

    bool horizontalWinHelper(void);

    bool diagonalWinHelper(void);

    int boardChoiceHelper(void);
};