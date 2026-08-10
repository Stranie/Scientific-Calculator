#include "MathFunctions.h"
#include "InputFunctions.h"
#include "UI.h"
#include <iostream>
#include <optional>
#include <string>

int main()
{
    int choice;
    double result, a, b;

    do {

        DisplayMenu();
        choice = GetChoice();

        switch (choice) {
        case 1:
            GetNumbers(a, b);
            result = Addition(a, b);
            std::cout << result << "\n";
            break;

        case 2:
            GetNumbers(a, b);
            result = Subtraction(a, b);
            std::cout << result << "\n";
            break;

        case 3:
            GetNumbers(a, b);
            result = Multiplication(a, b);
            std::cout << result << "\n";
            break;

        case 4: {
            GetNumbers(a, b);
            std::optional<double> DivisionResult = Division(a, b);

            if (DivisionResult) {
                std::cout << *DivisionResult << "\n";
            }
            else {
                std::cout << "Error\n";
            }
            break;
        }

        case 0:
            std::cout << "Goodbye!\n";
            break;

        default:
            std::cout << "Error!\n";
            break;
        }
    } while (choice != 0);
}


