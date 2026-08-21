#include <iostream>
using namespace std;

class employee
{
    char name[20];
    int age;

public:
    void getdata();
    void putdata();
};

void employee::getdata()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
}

void employee::putdata()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

const int SIZE = 3;

int main()
{
    employee manager[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        manager[i].getdata();
    }
    for (int i = 0; i < SIZE; i++)
    {
        manager[i].putdata();
    }
    return 0;
}
