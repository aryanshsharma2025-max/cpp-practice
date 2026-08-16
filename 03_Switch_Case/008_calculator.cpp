#include <iostream>
using namespace std;
void calc(int a, int b, int choice)
{
    switch (choice)
    {
    case 1:
        cout << a + b;
        break;
    case 2:
        cout << a - b;
        break;
    case 3:
        cout << a * b;
        break;
    case 4:
        cout << a / b;
        break;
    default:
        cout << "Invalid input..! Enter a valid input";
        break;
    }
}
int main()
{
    int a, b, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "1. Add " << endl;
    cout << "2. Subtract " << endl;
    cout << "3. multiply " << endl;
    cout << "4. Divide " << endl;
    cout << "Enter the choice: " << endl;
    cin >> choice;
    calc(a, b, choice);
    return 0;
}