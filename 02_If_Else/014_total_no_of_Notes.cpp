#include <iostream>
using namespace std;
void notes(int amount)
{
    int notes_500, notes_100, notes_50, notes_20, notes_10, notes_5, notes_2, notes_1;
    notes_500 = amount / 500;
    amount = amount % 500;
    notes_100 = amount / 100;
    amount = amount % 100;
    notes_50 = amount / 50;
    amount = amount % 50;
    notes_20 = amount / 20;
    amount = amount % 20;
    notes_10 = amount / 10;
    amount = amount % 10;
    notes_5 = amount / 5;
    amount = amount % 5;
    notes_2 = amount / 2;
    amount = amount % 2;
    notes_1 = amount / 1;

    cout << "Total number of notes: " << endl;
    cout << "500: " << notes_500 << endl;
    cout << "100: " << notes_100 << endl;
    cout << "50: " << notes_50 << endl;
    cout << "20: " << notes_20 << endl;
    cout << "10: " << notes_10 << endl;
    cout << "5: " << notes_5 << endl;
    cout << "2: " << notes_2 << endl;
    cout << "1: " << notes_1 << endl;
}
int main()
{
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    notes(amount);
}