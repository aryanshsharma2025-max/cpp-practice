#include <iostream>
using namespace std;

void calc(int a, int b, int choice)
{
    switch (choice)
    {
        case 1:
            cout << "Addition: " << a + b;
            break;

        case 2:
            cout << "Subtraction: " << a - b;
            break;

        case 3:
            cout << "Multiplication: " << a * b;
            break;

        case 4:
            if (b != 0)
                cout << "Division: " << (float)a / b;
            else
                cout << "Division by zero is not possible.";
            break;

        default:
            cout << "Invalid choice!";
    }
}

int main()
{
    int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nChoose an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";

    cout << "Enter your choice: ";
    cin >> choice;

    calc(a, b, choice);

    return 0;
}