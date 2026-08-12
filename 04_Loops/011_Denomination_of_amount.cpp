#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 10; i++)
    {
        if (amount >= notes[i])
        {
            int count = amount / notes[i];
            cout << notes[i] << " x " << count << endl;
            amount = amount % notes[i];
        }
    }
    return 0;
}
