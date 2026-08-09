#include <iostream>
using namespace std;
void num(int n)
{
    if (n % 5 == 0 && n % 11 == 0)
    {
        cout << n << " is divisible by both 5 and 11" << endl;
    }
    else if (n % 5 == 0)
    {
        cout << n << " is divisible by 5" << endl;
    }
    else if (n % 11 == 0)
    {
        cout << n << " is divisible by 11" << endl;
    }
    else
    {
        cout << n << " is not divisible by either 5 or 11" << endl;
    }
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    num(n);
}