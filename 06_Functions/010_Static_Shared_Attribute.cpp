#include <iostream>
using namespace std;

class Employee
{
    int empId;
    string empName;
    float salary;

public:
    static string companyName; 
    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Employee Name: ";
        cin >> empName;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee ID: " << empId
             << "\nName: " << empName
             << "\nSalary: " << salary
             << "\nCompany: " << companyName << endl;
    }
};

string Employee::companyName = "Tech Solutions Ltd";

int main()
{
    Employee e1, e2;

    cout << "--- Enter Employee 1 Data ---\n";
    e1.getData();

    cout << "\n--- Enter Employee 2 Data ---\n";
    e2.getData();

    cout << "\n--- Displaying Employees ---";
    e1.display();
    e2.display();

    return 0;
}
