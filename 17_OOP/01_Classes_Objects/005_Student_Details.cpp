#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int rollno;
    string name;
    float marks;

public:
    void inputdata()
    {
        cout << "enter roll number: ";
        cin >> rollno;
        cin.ignore();

        cout << "enter name: ";
        getline(cin, name);

        cout << "enter marks: ";
        cin >> marks;
    }

    void display() const
    {
        cout << "roll number: " << rollno << endl;
        cout << "name: " << name << endl;
        cout << "marks: " << marks << endl;
    }
};

int main()
{
    student s;
    cout << "student information" << endl;
    s.inputdata();
    cout << "student details" << endl;
    s.display();
    return 0;
}
