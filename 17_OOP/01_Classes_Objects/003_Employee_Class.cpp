#include <iostream>

class employee
{
    int empid;
    float salary;

public:
    void getdata();
    void display();
};

void employee::getdata()
{
    std::cout << "Enter Employee ID: ";
    std::cin >> empid;

    std::cout << "Enter Salary: ";
    std::cin >> salary;
}

void employee::display()
{
    std::cout << "\nEmployee ID: " << empid;
    std::cout << "\nSalary: " << salary << std::endl;
}

int main()
{
    employee e;
    e.getdata();
    e.display();
    return 0;
}
