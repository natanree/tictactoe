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

/*
Function: playerTurn()
Date Created: 03/13/2023
Date Last Modified: 03/13/2023
*/
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

/*
Function: checkForWin()
Date Created: 03/14/2023
Date Last Modified: 03/14/2023
*/
bool GameBoard::checkForWin(void)
{
    if (!verticalWinHelper() && !horizontalWinHelper() && !diagonalWinHelper())
    {
        return false;
    }
    return true;
}

/*
Function: verticalWinHelper()
Date Created: 03/14/2023
Date Last Modified: 03/14/2023
*/
bool GameBoard::verticalWinHelper(void)
{
    for (int i = 0; i < 3; i++)
    {
        if (this->mBoard[i] == this->mBoard[i+3] == this->mBoard[i+6])
        {
            return true;
        }
    }
    return false;
}

/*
Function: horizontalWinHelper()
Date Created: 03/14/2023
Date Last Modified: 03/14/2023
*/
bool GameBoard::horizontalWinHelper(void)
{
    for (int i = 0; i < 7; i += 3)
    {
        if (this->mBoard[i] == this->mBoard[i+1] == this->mBoard[i+2])
        {
            return true;
        }
    }
    return false;
}

/*
Function: diagonalWinHelper()
Date Created: 03/14/2023
Date Last Modified: 03/14/2023
*/
bool GameBoard::diagonalWinHelper(void)
{
    if (this->mBoard[0] == this->mBoard[4] == this->mBoard[8])
    {
        return true;
    }
    else if (this->mBoard[2] == this->mBoard[4] == this->mBoard[6])
    {
        return true;
    }
    return false;
}

/*
Function: displayBoard()
Date Created: 03/13/2023
Date Last Modified: 03/13/2023
Description: displays current state of board to terminal
Input: n/a
Output: n/a
Precondition: mBoard has 9 items
Postcondition: displays a board to terminal
*/
void GameBoard::displayBoard(void)
{
    std::cout << "\t|\t|" << std::endl;
    std::cout << "    " << this->mBoard[0] << "\t|   " << this->mBoard[1] << "\t|   " << this->mBoard[2] << std::endl;
    std::cout << " _______|_______|_______" << std::endl;
    std::cout << "\t|\t|" << std::endl;
    std::cout << "    " << this->mBoard[3] << "\t|   " << this->mBoard[4] << "\t|   " << this->mBoard[5] << std::endl;
    std::cout << " _______|_______|_______" << std::endl;
    std::cout << "\t|\t|" << std::endl;
    std::cout << "    " << this->mBoard[6] << "\t|   " << this->mBoard[7] << "\t|   " << this->mBoard[8] << std::endl;
    std::cout << "\t|\t|" << std::endl;
}