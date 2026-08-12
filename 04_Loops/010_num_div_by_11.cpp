#include <iostream>
using namespace std;
void divisible(int n)
{
    if (n % 11 == 0)
    {
        cout << "Number is divisible by 11";
    }
    else
    {
        cout << "Number is NOT divisible by 11";
    }
}
int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    divisible(num);
    return 0;
}