#include <iostream>
using namespace std;

void number(int n)
{
    if (n > 0)
    {
        cout << n << " is positive";
    }
    else if (n < 0)
    {
        cout << n << " is negative";
    }
    else
    {
        cout << n << " is zero";
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    number(n);
}