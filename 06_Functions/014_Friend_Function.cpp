#include <iostream>
#include <string>
using namespace std;

class ABC
{
    string name;
    int age;

public:
    void getdata(string n, int m)
    {
        name = n;
        age = m;
    }
    friend void showdata(ABC obj);
};
void showdata(ABC obj)
{
    cout << "Name: " << obj.name << endl;
    cout << "age: " << obj.age << endl;
}
int main()
{
    ABC person;
    string n;
    int a;

    cout << "Enter the name: ";
    getline(cin, n);
    cout << "Enter the age: ";
    cin >> a;
    person.getdata(n, a);
    showdata(person);

    return 0;
}