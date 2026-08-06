#include <iostream>
using namespace std;

int main()
{
    char Firstname[20], Middlename[20], Lastname[20];

    cout << "Enter your Firstname: ";
    cin >> Firstname;

    cout << "Enter your Middlename (press x if none): ";
    cin >> Middlename;

    cout << "Enter your Lastname: ";
    cin >> Lastname;

    cout << "Abbreviated Name: ";
    cout << Firstname[0] << ". ";

    if (Middlename[0] != 'x' && Middlename[0] != 'X')
    {
        cout << Middlename[0] << ". ";
    }

    cout << Lastname << endl;

    return 0;
}
