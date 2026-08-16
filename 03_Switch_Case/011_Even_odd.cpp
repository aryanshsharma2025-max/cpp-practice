#include <iostream>
using namespace std;
void Ev_Od(int n)
{
    int result;
    if (n % 2 == 0)
        result = 1;
    else
        result = 2;
    switch (result)
    {
    case 1:
        cout << "Even Number.";
        break;
    case 2:
        cout << "Odd Number.";
        break;
    default:
        cout << "Invalid Input.";
        break;
    }
}
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    Ev_Od(num);
    return 0;
}