#include <iostream>
using namespace std;

void sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of numbers up to " << n << " is " << sum << endl;
}

int main()
{
    int n;
    cout << "Enter the number up to which you want the sum: ";
    cin >> n;
    sum(n);
    return 0;
}
