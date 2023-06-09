#pragma once
#include <vector>
#include <iostream>

class GameBoard
{
    public:
    GameBoard();

    void resetBoard();

    std::vector<char>& getBoard(void);

    void updateBoard(char symbol, int boardPos);

    void displayBoard(void);

    bool checkForWin(void);

    private:
    std::vector<char> mBoard;

    // ----- private functions -----

    bool verticalWinHelper(void);

    bool horizontalWinHelper(void);

    bool diagonalWinHelper(void);

    int boardChoiceHelper(void);
};