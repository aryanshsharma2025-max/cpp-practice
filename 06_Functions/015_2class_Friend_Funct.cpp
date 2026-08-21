#include <iostream>
#include <string>
using namespace std;

class Age;

class Name
{
    string name;

public:
    void getname(string n)
    {
        name = n;
    }

    friend void showdetail(Name n, Age a);
};

class Age
{
private:
    int age;

public:
    void getage(int a)
    {
        age = a;
    }
    friend void showdetail(Name n, Age a);
};

void showdetail(Name n, Age a)
{
    cout << "Name: " << n.name << endl;
    cout << "Age: " << a.age << endl;
}

int main()
{
    Name n;
    Age a;

    string inputName;
    int inputAge;

    cout << "Enter name: ";
    getline(cin, inputName);
    cout << "Enter age: ";
    cin >> inputAge;

    n.getname(inputName);
    a.getage(inputAge);

    showdetail(n, a);

    return 0;
}
