#include <iostream>
using namespace std;

inline int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    cout << "Product: " << multiply(a, b) << endl;
    return 0;
}
