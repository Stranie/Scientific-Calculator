#include "Calculator.h"
#include "UI.h"
#include "InputFunctions.h"
#include "MathFunctions.h"
#include <iostream>

void BasicOperations(){
    int choice;
    double result, a, b;
    do {
        DisplayBasicMenu();
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
            a = GetValidNumber("Enter Number: ");
            result = AbsoluteValue(a);
            std::cout << result << "\n";
            break;
        case 0:
            break;
        default:
            std::cout << "Error!\n";
            break;
        }

	} while (choice != 0);

    
}

void PowersandRoots() {
    int choice, n;
    double a, b, result;
    do {
        DisplayPowerRootMenu();
        choice = GetChoice();

        switch (choice) {
        case 1:
            GetNumbers(a, b);
            result = Power(a, b);
            std::cout << result << "\n";
            break;
        case 2:
        {
            a = GetValidNumber("Enter Radicand: ");
            n = GetValidInteger("Enter Root Degree: ");
            std::optional<double> rootresult = Root(a, n);
            if (rootresult) {
                std::cout << *rootresult << "\n";
            }
            else {
                std::cout << "Invalid root combination.\n";
            }
            break;
        }
        case 3: {
            a = GetValidNumber("Enter a Number: ");
            std::optional<double>naturallogarithmresult = NaturalLogarithm(a);
            if (naturallogarithmresult) {
                std::cout << *naturallogarithmresult << "\n";
            }
            else {
                std::cout << "Invalid Number. Try Again!\n";
            }
            break;
        }
        case 4: {
            a = GetValidNumber("Enter a Number: ");
            b = GetValidNumber("Enter Logarithm Base: ");
            std::optional<double> logarithmresult = Logarithm(a, b);
            if (logarithmresult) {
                std::cout << *logarithmresult << "\n";
            }
            else {
                std::cout << "Invalid Logarithm Combination. Try Again!\n";
            }
            break;
        }
        case 0:
            break;
        default:
            std::cout << "Error!\n";
            break;
        }
    } while (choice != 0);
}

void Trigonometry() {
    int choice;
    double a, result;

    do {
        DisplayTrigonometryMenu();
        choice = GetChoice();

        switch (choice) {
        case 1:
            a = GetValidNumber("Enter Angle in Degrees: ");
            result = Sine(a);
            std::cout << result << "\n";
            break;
        case 2:
            a = GetValidNumber("Enter Angle in Degrees: ");
            result = Cosine(a);
            std::cout << result << "\n";
            break;
        case 3: {
            a = GetValidNumber("Enter Angle in Degrees: ");
            std::optional<double> tanresult = Tangent(a);
            if(tanresult){
                std::cout << *tanresult << "\n";
            }
            else {
                std::cout << "Invalid Angle. Try Again!\n";
            }
            break;
            }
        case 0:
            break;
        default:
            std::cout << "Error!\n";
            break;
        }
    } while (choice != 0);
}
                
    
