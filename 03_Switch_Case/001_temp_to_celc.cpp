#include <iostream>
using namespace std;

double convert(double temp, int choice)
{
    double result;
    switch (choice)
    {
    case 1:
        result = (temp * 9.0 / 5.0) + 32;
        break;
    case 2:
        result = (temp - 32) * 5.0 / 9.0;
        break;
    default:
        cout << "Invalid choice!" << endl;
        result = 0;
    }
    return result;
}

int main()
{
    int choice;
    double temp;

    cout << "Temperature Conversion\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temp;

    double converted = convert(temp, choice);

    if (choice == 1)
        cout << "Temperature in Fahrenheit: " << converted << endl;
    else if (choice == 2)
        cout << "Temperature in Celsius: " << converted << endl;

    return 0;
}
