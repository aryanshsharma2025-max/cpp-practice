#include <iostream>
using namespace std;
void quad(int a, int b, int c)
{
    int D = b * b - 4 * a * c;
    if (D > 0)
    {
        cout << "Roots are real and distinct." << endl;
    }
    else if (D == 0)
    {
        cout << "Roots are real and equal." << endl;
    }
    else
    {
        cout << "Roots are complex" << endl;
    }
}
int main()
{
    int a, b, c;
    cout << "Enter the coefficients a, b, c: ";
    cin >> a >> b >> c;
    quad(a, b, c);
}