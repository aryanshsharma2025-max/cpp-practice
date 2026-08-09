#include <iostream>
using namespace std;
void even_odd(int n)
{
    if (n % 2 == 0)
    {
        cout << n << " is an Even number";
    }
    else
    {
        cout << n << " is an Odd number";
    }
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    even_odd(n);
}