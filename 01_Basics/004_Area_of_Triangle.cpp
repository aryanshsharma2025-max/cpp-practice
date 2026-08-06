#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, s, area;

    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    s = (a + b + c) / 2; // semi-perimeter
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Area of triangle = " << area << endl;
    return 0;
}
