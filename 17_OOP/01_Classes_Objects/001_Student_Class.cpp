#include <iostream>

class student
{
    int roll;
    char name[30];

public:
    void getdata();
    void display();
};

void student::getdata()
{
    std::cout << "Enter Roll No: ";
    std::cin >> roll;

    std::cout << "Enter Name: ";
    std::cin >> name;
}

void student::display()
{
    std::cout << "\nRoll No: " << roll;
    std::cout << "\nName: " << name << std::endl;
}

int main()
{
    student s;
    s.getdata();
    s.display();
    return 0;
}
