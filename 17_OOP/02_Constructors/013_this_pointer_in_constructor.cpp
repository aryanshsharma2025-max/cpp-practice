#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int id;
    string name;
    double salary;

public:
    Employee(int id, string name, double salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void display() const
    {
        cout << "ID: " << this->id
             << " | Name: " << this->name
             << " | Salary: Rs " << this->salary << endl;
    }
};

int main()
{
    Employee emp1(101, "Aryansh", 85000.0);
    Employee emp2(102, "Rohan", 62000.0);

    cout << "--- Employee Details (Resolved using 'this' pointer) ---" << endl;
    emp1.display();
    emp2.display();

    return 0;
}
