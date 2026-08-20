#include <iostream>
using namespace std;

inline bool isEven(int n)
{
    return (n % 2 == 0);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isEven(num))
    {
        cout << num << " is Even" << endl;
    }
    else
    {
        cout << num << " is Odd" << endl;
    }
    return 0;
}
