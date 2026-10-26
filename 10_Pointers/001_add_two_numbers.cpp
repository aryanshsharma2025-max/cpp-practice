// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
//     int *ptr1 = &a;
//     int *ptr2 = &b;
//     int sum = *ptr1 + *ptr2;
//     cout << "Sum of " << *ptr1 << " and " << *ptr2 << " is: " << sum << endl;
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *ptr = &x;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << *ptr << endl; // Dereferencing the pointer to get the value of x
    return 0;
}