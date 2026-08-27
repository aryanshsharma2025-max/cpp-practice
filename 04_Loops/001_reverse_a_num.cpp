#include <iostream>
using namespace std;
void rev(int num)
{
    int rev = 0;
    while (num != 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    cout << rev;   
}
int main()
{
    int num;
    cout << "Enter a num: ";
    cin >> num;
    rev(num);
}