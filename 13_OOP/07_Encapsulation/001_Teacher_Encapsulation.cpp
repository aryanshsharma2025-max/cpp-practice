#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;

    void setSalary(double s)
    {
        salary = s;
    }

    double getSalary()
    {
        return salary;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Dr. Sharma";
    t1.dept = "Computer Science";
    t1.setSalary(50000);
    t1.display();
    return 0;
}
