#include <iostream>
using namespace std;
void sqrt(int num)
{
    int i = 1;
    while (i * i <= num)
    {
        i++;
    }
    cout << "square root of " << num << " is " << i - 1 << endl;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    sqrt(n);
    return 0;
}