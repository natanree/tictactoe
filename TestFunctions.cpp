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