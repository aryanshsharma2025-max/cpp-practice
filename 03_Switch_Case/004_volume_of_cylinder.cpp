#include <iostream>
using namespace std;
int main()
{
    int rad, height, pi;
    pi = 3.14;
    cout << "Enter the radius and height of cylinder: ";
    cin >> rad >> height;
    int circum = 2 * pi * rad;
    int volume = pi * (rad * rad) * height;
    cout << "Circumference of base of cylinder is " << circum << " and volume is: " << volume;
    return 0;
}