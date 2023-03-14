#include "GameBoard.hpp"

/*
Function: GameBoard()
Date Created: 03/13/2023
Date Last Modified: 03/13/2023
Description: Defualt Constructor for GameBoard
Input: n/a
Output: n/a
Precondition: n/a
Postcondition: mBoard set to hold 9 values from 1-9
*/
GameBoard::GameBoard()
{
    for (char i = '1'; i <= '9'; i++)
    {
        this->mBoard.emplace_back(i);
    }
}

/*
Function: resetBoard()
Date Created: 03/11/2023
Date Last Modified: 03/13/2023
Description: resets mBoard to initial values
Input: n/a
Output: n/a
Precondition: n/a
Postcondition: resets mBoard to initial values
*/
void GameBoard::resetBoard()
{
    this->mBoard.clear();
    for (char i = '1'; i <= '9'; i++)
    {
        this->mBoard.emplace_back(i);
    }
}

/*
Function: getBoard()
Date Created: 03/13/2023
Date Last Modified: 03/13/2023
Description getter for vector mBoard
Input: n/a
Output: reference to character vector
Precondition: n/a
Postcondition: n/a
*/
std::vector<char>& GameBoard::getBoard(void)
{
    return this->mBoard;
}

void GameBoard::playerTurn(char symbol)
{
    int boardPos = 0;
    bool redo;
    do
    {
        redo = false;
        std::cout << "Please pick a board position: ";
        std::cin >> boardPos;
        if (boardPos < 1 || boardPos > 9 || this->mBoard[boardPos-1] < '1' || this->mBoard[boardPos-1] > '9')
        {
            redo = true;
        }
    } while (redo);

    this->mBoard[boardPos-1] = symbol;
}

void GameBoard::displayBoard(void)
{
    std::cout << "\t|\t|" << std::endl;
    std::cout << "   " << this->mBoard[0] << "\t|    " << this->mBoard[1] << std::endl;
}