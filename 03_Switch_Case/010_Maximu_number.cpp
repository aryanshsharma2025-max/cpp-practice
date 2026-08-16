#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    int val;
    if (a > b)
        val = 1;
    else
        val = 2;
    switch (val)
    {
    case 1:
        cout << a << " is larger";
        break;
    case 2:
        cout << b << " is larger";
        break;
    default:
        cout << "both are same";
        break;
    }
    return 0;
}