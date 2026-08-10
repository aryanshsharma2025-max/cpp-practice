#include <iostream>
using namespace std;

void check(int a, int b, int c)
{
    if ((a + b + c == 180) && (a > 0 && b > 0 && c > 0))
    {
        cout << "valid triangle";
    }
    else
    {
        cout << "Not valid triangle";
    }
}

int main()
{
    int a, b, c;
    cout << "Enter three angles of triangle: " << endl;
    cin >> a >> b >> c;
    check(a, b, c);
}