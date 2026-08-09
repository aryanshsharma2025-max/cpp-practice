#include <iostream>
using namespace std;

void largest(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << a << " A is largest";
    }
    else if (b > a && b > c)
    {
        cout << b << " B is largest";
    }
    else
    {
        cout << c << " C is largest";
    }
}

int main()
{
    int a, b, c;
    cout << " Enter 3 numbers: ";
    cin >> a >> b >> c;
    largest(a, b, c);
}