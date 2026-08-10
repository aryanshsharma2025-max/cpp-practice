#include <iostream>
using namespace std;
void check(int cp, int sp)
{
    if (cp < sp)
    {
        cout << "Profit";
    }
    else
    {
        cout << "Loss";
    }
}
int main()
{
    int sp, cp;
    cout << "Enter the cost price and selling price: " << endl;
    cin >> cp >> sp;
    check(cp, sp);
}