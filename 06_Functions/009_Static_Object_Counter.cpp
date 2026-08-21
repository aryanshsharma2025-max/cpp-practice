#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;
    static int count; 

public:
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        count++; 
    }

    void display()
    {
        cout << "\nRoll: " << roll << ", Name: " << name << endl;
    }

    void displayCount()
    {
        cout << "Total Students Count: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1, s2, s3;

    cout << "--- Enter details for Student 1 ---\n";
    s1.getData();

    cout << "\n--- Enter details for Student 2 ---\n";
    s2.getData();

    cout << "\n--- Enter details for Student 3 ---\n";
    s3.getData();

    cout << "\n--- Student Details ---";
    s1.display();
    s2.display();
    s3.display();

    cout << endl;
    s1.displayCount();

    return 0;
}
