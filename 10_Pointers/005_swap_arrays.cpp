#include <iostream>
using namespace std;
int main()
{
    int arr1[5], arr2[5];
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    cout << "Enter 5 elements in Array 1: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> *(ptr1 + i);
    }
    cout << "Enter 5 elements in Array 1: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> *(ptr2 + i);
    }
    for (int i = 0; i < 5; i++)
    {
        int temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = temp;
    }
    cout << "After swapping, Array 1 elements are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr1 + i) << " ";
    }
    cout << "\nAfter swapping, Array 2 elements are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr2 + i) << " ";
    }
    return 0;
}