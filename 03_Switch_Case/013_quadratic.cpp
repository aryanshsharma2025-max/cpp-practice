#include <iostream>
using namespace std;

int main()
{
    float a, b, c, D;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    D = b * b - 4 * a * c; 
    int flag;

    if (D > 0)
        flag = 1;
    else if (D == 0)
        flag = 0;
    else
        flag = -1;

    switch (flag)
    {
    case 1:
        cout << "Roots are real and distinct.\n";
        cout << "Formula: (-b ± sqrt(" << D << ")) / (2*a)";
        break;

    case 0:
        cout << "Roots are real and equal.\n";
        cout << "Root = " << -b << " / (2*" << a << ")";
        break;

    case -1:
        cout << "Roots are complex.\n";
        cout << "Formula: (-b / (2*a)) ± (sqrt(" << -D << ") / (2*a)) i";
        break;
    }
    return 0;
}
