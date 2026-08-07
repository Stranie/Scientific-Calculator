#include <iostream>
#include <optional>

using namespace std;

void DisplayMenu() {
    cout << "======= Scientific Calculator =========\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "0. Exit\n";
    cout << "Choose an option:";
}

void GetNumbers(double& a, double& b) {
    cout << "Enter First Number:";
    cin >> a;
    cout << "Enter Second Number:";
    cin >> b;
}

double Addition(double a, double b) {
    return a + b;
}

double Subtraction(double a, double b) {
    return a - b;
}

double Multiplication(double a, double b) {
    return a * b;
}

optional<double> Division(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        return nullopt;
    }
}

int main()
{
    int choice;
    double result, a, b;

    do {

        DisplayMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            GetNumbers(a, b);
            result = Addition(a, b);
            cout << result << "\n";
            break;

        case 2:
            GetNumbers(a, b);
            result = Subtraction(a, b);
            cout << result << "\n";
            break;

        case 3:
            GetNumbers(a, b);
            result = Multiplication(a, b);
            cout << result << "\n";
            break;

        case 4: {
            GetNumbers(a, b);
            optional<double> DivisionResult = Division(a, b);

            if (DivisionResult) {
                cout << *DivisionResult << "\n";
            }
            else {
                cout << "Error\n";
            }
            break;
        }

        case 0:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Error!\n";
            break;
        }
    } while (choice != 0);


    

}


