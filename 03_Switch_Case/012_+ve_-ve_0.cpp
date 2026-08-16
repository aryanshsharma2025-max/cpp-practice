#include <iostream>
using namespace std;
void num(int n)
{
    int result;
    if (n > 0)
        result = 1;
    else if (n < 0)
        result = 2;
    else
        result = 3;
    switch (result)
    {
    case 1:
        cout << "Positive Number.";
        break;
    case 2:
        cout << "Negative Number.";
        break;
    case 3:
        cout << "number is 0.";
        break;
    default:
        cout << "Invalid input.";
        break;
    }
}
int main()
{
    int a;
    cout << "Enter the number.";
    cin >> a;
    num(a);
    return 0;
}