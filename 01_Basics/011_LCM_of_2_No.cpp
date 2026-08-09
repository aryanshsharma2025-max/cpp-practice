#include <iostream>
using namespace std;
void gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "gcd is " << a << endl;
}
void lcm(int a, int b)
{
    int lcm = (a * b) / a;
    cout << "lcm of " << a << " and " << b << " is " << lcm;
}
int main()
{
    int a, b;
    cout << "enter 2 numbers: ";
    cin >> a >> b;
    gcd(a, b);
    lcm(a, b);
}