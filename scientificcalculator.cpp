#include <iostream>

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


int main()
{
    int choice;
    double result, a, b;

    do {

        DisplayMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter First Number:";
            cin >> a;
            cout << "Enter Second Number:";
            cin >> b;
            result = a + b;
            cout << result << "\n";
            break;

        case 2:
            cout << "Enter First Number:";
            cin >> a;
            cout << "Enter Second Number:";
            cin >> b;
            result = a - b;
            cout << result << "\n";
            break;

        case 3:
            cout << "Enter First Number:";
            cin >> a;
            cout << "Enter Second Number:";
            cin >> b;
            result = a * b;
            cout << result << "\n";
            break;

        case 4:
            cout << "Enter First Number:";
            cin >> a;
            cout << "Enter Second Number:";
            cin >> b;
            if (b == 0) {
                cout << "Error!\n";
            }
            else {
                result = a / b;
                cout << result << "\n";
            }
            break;

        case 0:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Error!\n";
            break;
        }
    } while (choice != 0);


    

}


