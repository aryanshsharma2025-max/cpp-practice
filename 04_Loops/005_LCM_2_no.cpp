#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int lcm = a;
    while (lcm % b != 0)
    {
        lcm += a;
    }
    cout << "LCM of " << a << " and " << b << " is " << lcm << endl;
    return 0;
}
