#include <iostream>
using namespace std;
void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}
int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    table(num);
    return 0;
}