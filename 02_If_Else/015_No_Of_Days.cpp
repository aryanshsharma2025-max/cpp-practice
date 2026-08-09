#include <iostream>
#include <string>
using namespace std;

void days(string month)
{
    if (month == "january" || month == "march" || month == "may" || month == "july" || month == "august" || month == "october" || month == "december")
    {
        cout << month << " has 31 days." << endl;
    }
    else if (month == "april" || month == "june" || month == "september" || month == "november")
    {
        cout << month << " has 30 days." << endl;
    }
    else if (month == "february")
    {
        cout << month << " has 28 or 29 days (depending on leap year)." << endl;
    }
    else
    {
        cout << "Invalid month name entered." << endl;
    }
}

int main()
{
    string month;
    cout << "Enter month name (in lowercase only): ";
    cin >> month;
    days(month);

    return 0;
}
