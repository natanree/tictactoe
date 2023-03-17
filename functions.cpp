#include "functions.hpp"

/*
Function: displayMenu()
Date Created: 03/16/2023
Date Last Modified: 03/16/2023
*/
void displayMenu(void)
{
    std::cout << "Please choose one of the following" << std::endl;
    std::cout << "1. Play game" << std::endl;
    std::cout << "2. Exit game" << std::endl;
}

/*
Function: getMenuOption()
Date Created: 03/16/2023
Date Last Modified: 03/16/2023
*/
int getMenuOption(void)
{
    int choice;
    bool redo;
    do
    {
        redo = false;
        displayMenu();
        std::cin >> choice;
        if (choice < 1 || choice > 2)
        {
            std::cout << "Invalid choice, please pick again" << std::endl;
            redo = true;
        }
    } while (redo);
    return choice;
}

/*
Function: gameLoop()
Date Created: 03/17/2023
Date Last Modified: 03/17/2023
*/
void gameLoop(void)
{
    int choice;
    GameBoard theBoard;
    do
    {
        choice = getMenuOption();
        if (choice == 1)
        {
            theBoard.displayBoard();
        }
    } while (choice == 1);
    
}