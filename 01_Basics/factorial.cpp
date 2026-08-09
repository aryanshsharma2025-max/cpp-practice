#include <iostream>
using namespace std;
void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "factorial of " << n << " is " << fact;
}
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    factorial(n);
}