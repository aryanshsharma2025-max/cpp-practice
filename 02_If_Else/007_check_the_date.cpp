#include <iostream>
using namespace std;
void check(int d, int m, int y)
{
    if (d >= 1 && d <= 31 && m >= 1 && m <= 12 && y >= 1900 && y <= 2026)
    {
        cout << "The date is valid." << endl;
    }
    else
    {
        cout << "The date is invalid." << endl;
    }
}
int main()
{
    int d, m, y;
    cout << "Enter the date (dd mm yyyy): ";
    cin >> d >> m >> y;
    check(d, m, y);
}