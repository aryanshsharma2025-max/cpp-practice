#include <iostream>
using namespace std;
void max(int a, int b)
{
    if (a > b)
    {
        cout << a << " is greater than " << b;
    }
    else if (b > a)
    {
        cout << b << "is greater than " << a;
    }
    else
    {
        cout << a << " and " << b << " are equal";
    }
}
int main()
{
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    max(a, b);
}