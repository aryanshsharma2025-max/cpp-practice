#include <iostream>
using namespace std;

inline float toFahrenheit(float celsius)
{
    return (celsius * 9.0 / 5.0) + 32;
}

int main()
{
    float c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    cout << "Temperature in Fahrenheit: " << toFahrenheit(c) << endl;
    return 0;
}
