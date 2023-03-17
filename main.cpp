/*
Author: Yu Chung Nathan Lee
Date Created: 03/11/2023
Date Last Modified: 03/16/2023
*/
#include "GameBoard.hpp"
#include "functions.hpp"
#include "TestFunctions.hpp"

int main (void)
{
    // test functions
    TestFunctions testObj;
    testObj.testResetBoard();
    testObj.testUpdateBoard();
    // end of test functions
    
    GameBoard tictactoe;
    tictactoe.displayBoard();
    return 0;
}