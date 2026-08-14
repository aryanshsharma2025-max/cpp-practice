#include <iostream>
using namespace std;
void find_day(int choice)
{
    switch (choice)
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
        cout << "INVALID..!(Enter the valid input between 1-7)";
        break;
    }
}
int main()
{
    int day;
    cout << "Enter the number to find the day (1-7): ";
    cin >> day;
    find_day(day);
    return 0;
}