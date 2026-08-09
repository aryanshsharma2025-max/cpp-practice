#include <iostream>
using namespace std;
void week(int n)
{
    switch (n)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid input. Please enter a number between 1 and 7.";
    }
}
int main()
{
    int n;
    cout << "Enter a number (1-7): ";
    cin >> n;
    week(n);
}