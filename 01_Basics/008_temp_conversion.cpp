#include <iostream>
using namespace std;
void temp(int c)
{
    float f = (c * 9 / 5) + 32;
    cout << "Temperature in Fahrenheit: " << f;
}
int main ()
{
    int c;
    cout << "Enter temp. in Celsius: ";
    cin >> c;
    temp(c);
}