#include <iostream>
using namespace std;
void gcd(int a, int b)
{
    int num = 1;
    for (int i = 1; i <= a && 1 <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            num = i;
        }
    }
    cout << num;
}
int main()
{
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    gcd(a, b);
    return 0;
}