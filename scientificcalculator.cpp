#include "MathFunctions.h"
#include "InputFunctions.h"
#include "UI.h"
#include <iostream>
#include <optional>
#include <string>

int main()
{
    int choice, n;
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
        case 5:
            GetNumbers(a, b);
            result = Power(a, b);
            std::cout << result << "\n";
            break;
        case 6: {
            a = GetValidNumber("Enter Radicand: ");
            n = GetValidInteger("Enter Root Degree: ");
            std::optional<double> result = Root(a, n);
            if (result) {
                std::cout << *result << "\n";
            }
            else {
                std::cout << "Invalid root combination.\n";
            }
            break;
        }
        case 7:
            a = GetValidNumber("Enter Number: ");
            result = AbsoluteValue(a);
            std::cout << result << "\n";
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


