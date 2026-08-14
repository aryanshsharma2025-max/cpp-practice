#include <iostream>
using namespace std;

int findGrade(int marks)
{
    char grade;
    switch (marks / 10)
    {
    case 10:
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    case 5:
        grade = 'E';
        break;
    default:
        grade = 'F';
    }
    return grade;
}

int main()
{
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    int grade = findGrade(marks);
    cout << "Numeric Grade Code: " << grade << endl;

    return 0;
}
