#include <iostream>
using namespace std;
void vote(int age)
{
    if (age >= 18)
    {
        cout << "you are eligible to vote" << endl;
    }
    else
    {
        cout << "you are not eligible to vote" << endl;
    }
}
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    vote(age);
}