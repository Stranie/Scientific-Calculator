#include "InputFunctions.h"
#include "UI.h"
#include "Calculator.h"
#include <iostream>

int main()
{
    int choice;

    do {
        DisplayMainMenu();
        choice = GetChoice();

        switch(choice){
        case 1:
            BasicOperations();
            break;
        case 2:
            PowersandRoots();
            break;
        case 3:
            Trigonometry();
            break;
        case 0:
            std::cout << "Goodbye!\n";
            break;

        default:
            std::cout << "Error!\n";
            break;
        }
    } while (choice != 0);
}

        


