#include <iostream>
using namespace std;
class bank
{
    int balance;

public:
    int add;
    bank()
    {
        balance = 10000;
        cout << "Enter the amount to add in the bank account: ";
        cin >> add;
        balance = balance + add;
        cout << "Account created with balance: " << balance << endl;
    }
};
int main()
{
    bank accl;
    return 0;
}