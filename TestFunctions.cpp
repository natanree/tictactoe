#include "TestFunctions.hpp"

void TestFunctions::testResetBoard(void)
{
    bool success = true;
    char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
    char newChar = '1';
    resetBoard(board);
    for (int row = 0; row < 3; ++row)
    {
        for (int column = 0; column < 3; ++row)
        {
            if (board[row][column] != newChar++)
            {
                success = false;
                break;
            }
        }
        if (success == false)
        {
            break;
        }
    }
}