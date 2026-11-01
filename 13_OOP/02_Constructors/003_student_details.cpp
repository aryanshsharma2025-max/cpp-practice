#include <iostream>
#include <string>
using namespace std;
class student

{
public:
    string name;
    int age;
    student(string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << " Name: " << name << ", Age: ";
    }
};
int main()
{
    student s1("Aryansh", 20);
    s1.display();
    return 0;
}
