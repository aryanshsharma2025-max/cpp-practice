#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    float gpa;

    Student(string s, int r, float g)
    {
        name = s;
        roll = r;
        gpa = g;
    }
};

int main()
{
    Student s1("Aryansh", 48, 8);
    cout << "Name: " << s1.name << "\nGPA: " << s1.gpa << "\nRoll No: " << s1.roll << endl;
    return 0;
}
