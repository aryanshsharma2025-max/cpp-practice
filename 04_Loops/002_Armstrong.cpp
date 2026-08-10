#include <iostream>
using namespace std;

int main()
{
    int num, original, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num > 0)
    {
        int digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number.";
    else
        cout << original << " is NOT an Armstrong number.";

    return 0;
}
