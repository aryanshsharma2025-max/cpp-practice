#include <iostream>
using namespace std;
void rev(int num)
{
    while (num != 0)
    {
        int digit = num % 10;
        int rev = rev * 10 + digit;
        num = num / 10;
    }
}
int main()
{
    int num;
    cout << "Enter a num: ";
    cin >> num;
    rev(num);
}