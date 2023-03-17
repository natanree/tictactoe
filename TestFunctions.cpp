#include "TestFunctions.hpp"

/*
Function: testResetBoard()
Date Created: 03/11/2023
Date Last Modified: 03/13/2023
Description: test case for resetBoard public function of GameBoard class
Test Steps:
    1. Initialize GameBoard object
    2. call resetBoard function
    3. Check if vector holds '1', '2', ..., '9'
Expected Result: Vector holds '1', '2', ..., '9'
Actual Result:
Status: not run
*/
void TestFunctions::testResetBoard(void)
{
    bool success = true;
    GameBoard testBoard;
    testBoard.resetBoard();
    char checkChar = '1';
    for (auto i : testBoard.getBoard())
    {
        if (i != checkChar++)
        {
            success = false;
            break;
        }
    }
    if(success)
    {
        std::cout << "resetBoard passed test!" << std::endl;
    }
    else
    {
        std::cout << "resetBoard failed test!" << std::endl;
    }
}

/*
Function: testUpdateBoard()
Date Created: 03/16/2023
Date Last Modified: 03/16/2023
Description: test case for updateBoard public function of GameBoard class
Test Steps:
    1. create GameBoard object
    2. call updateBoard with 'x' and 3
    3. loop through vector and check if 3rd object (position 2) is 'x' and all other items are numbered like default
Expected Result: vector holds 1, 2, x, 4, 5, 6, 7, 8, 9
Actual Result:
Status: not run
*/
void TestFunctions::testUpdateBoard(void)
{
    bool success = true;
    GameBoard testBoard;
    testBoard.updateBoard('x', 3);
    char checkChar = '1';
    for (int i = 0; i < 9; i++)
    {
        if (i == 2)
        {
            if (testBoard.getBoard()[i] != 'x')
            {
                success = false;
                break;
            }
            checkChar ++;
        }
        else
        {
            if (testBoard.getBoard()[i] != checkChar++)
            {
                success = false;
                break;
            }
        }
    }
    if(success)
    {
        std::cout << "updateBoard passed test!" << std::endl;
    }
    else
    {
        std::cout << "updateBoard failed test!" << std::endl;
    }
}