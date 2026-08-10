#include <iostream>
using namespace std;
void triangle(int a, int b, int c)
{
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        cout << "Equilateral";
    }
    else if (a == b || b == c || a == c)
    {
        cout << "isoceles";
    }
    else
    {
        cout << "scalene";
    }
}
int main()
{
    int a, b, c;
    cout << "Enter the sides of triangle" << endl;
    cin >> a >> b >> c;
    triangle(a, b, c);
}