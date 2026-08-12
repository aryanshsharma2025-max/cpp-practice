#include <iostream>
using namespace std;

void num(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    cout << "Reversed number = " << rev << endl;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    num(n);
}