#include <iostream>

using namespace std;


int main()
{
    int choice;

    cout << "======= Scientific Calculator =========\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "0. Exit\n";
    cout << "Choose an option";

    cin >> choice;

    double result, a, b;

    switch (choice) {
    case 1:
        cout << "Enter First Number:";
        cin >> a;
        cout << "Enter Second Number:";
        cin >> b;
        result = a + b;
        cout << result;
        break;

    case 2:
        cout << "Enter First Number:";
        cin >> a;
        cout << "Enter Second Number:";
        cin >> b;
        result = a - b;
        cout << result;
        break;

    case 3:
        cout << "Enter First Number:";
        cin >> a;
        cout << "Enter Second Number:";
        cin >> b;
        result = a * b;
        cout << result;
        break;

    case 4:
        cout << "Enter First Number:";
        cin >> a;
        cout << "Enter Second Number:";
        cin >> b;
        if (b == 0) {
            cout << "Error!";
        }
        else {
            result = a / b;
            cout << result;
        }
        break;

    case 0:
        cout << "Goodbye!";
        break;

    default:
        cout << "Error!";
        break;
    }


    

}


