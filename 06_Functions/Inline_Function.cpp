#include <iostream>
using namespace std;
inline int square(int n)
{
    return n * n;
}
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << square(num);
    return 0;
}