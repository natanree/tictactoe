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