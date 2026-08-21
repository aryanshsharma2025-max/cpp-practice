#include <iostream>
using namespace std;
inline int cube(int n)
{
    return (n * n * n);
}
int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    cout << cube(num);
    return 0;
}