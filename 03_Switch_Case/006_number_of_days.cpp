#include <iostream>
#include <string>
using namespace std;

int num(string month)
{
    if (month == "january")
        return 1;
    if (month == "february")
        return 2;
    if (month == "march")
        return 3;
    if (month == "arpil")
        return 4;
    if (month == "may")
        return 5;
    if (month == "june")
        return 6;
    if (month == "july")
        return 7;
    if (month == "august")
        return 8;
    if (month == "september")
        return 9;
    if (month == "october")
        return 10;
    if (month == "november")
        return 11;
    if (month == "december")
        return 12;
    return -1;
}
void days(string month)
{
    int m = num(month);
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << month << " has 31 days";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << month << " has 30 days";
        break;
    case 2:
        cout << month << " february has 28 days";
        break;
    default:
        cout << "Invalid Month Name.";
        break;
    }
}

int main()
{
    string month;
    cout << "Enter the month name: ";
    cin >> month;
    days(month);
    return 0;
}
