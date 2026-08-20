#include <iostream>
using namespace std;

inline int findMax(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int num1, num2;
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;
    cout << "Maximum is: " << findMax(num1, num2) << endl;
    return 0;
}
