#include <iostream>
using namespace std;

void week(int n)
{
    if (n == 1)
    {
        cout << "Monday";
    }
    else if (n == 2)
    {
        cout << "Tuesday";
    }
    else if (n == 3)
    {
        cout << "Wednesday";
    }
    else if (n == 4)
    {
        cout << "Thursday";
    }
    else if (n == 5)
    {
        cout << "Friday";
    }
    else if (n == 6)
    {
        cout << "Saturday";
    }
    else if (n == 7)
    {
        cout << "Sunday";
    }
    else
    {
        cout << "Invalid input. Please enter a number between 1 and 7.";
    }
}

int main()
{
    int n;
    cout << "Enter a number (1-7): ";
    cin >> n;
    week(n);
    return 0;
}
