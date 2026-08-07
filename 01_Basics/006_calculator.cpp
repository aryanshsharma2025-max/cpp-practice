#include<iostream>
using namespace std;
void calc(int a, int b)
{
    int choice;
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
            cout << "Division: " << a / b;
            break;
        default:
            cout << "Invalid choice";
            break;
    }
}
int main ()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Choose an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;

    calc(a, b);
    return 0;
}