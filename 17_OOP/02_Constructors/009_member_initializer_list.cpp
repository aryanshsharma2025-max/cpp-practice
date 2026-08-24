#include <iostream>
#include <string>
using namespace std;

class StudentRecord
{
    const int rollNumber;
    string name;
    float marks;

public:
    StudentRecord(int r, string n, float m) : rollNumber(r), name(n), marks(m)
    {
    }

    void display()
    {
        cout << "Roll Number (const): " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    StudentRecord s1(101, "Aryansh", 92.5);
    cout << "--- Student Record (Initialized via Initializer List) ---" << endl;
    s1.display();

    return 0;
}
