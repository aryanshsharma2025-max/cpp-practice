#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int *ptr = arr;
    cout << "Enter 5 elements in Array: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> *(ptr +i);
    }
    cout << "Array elements in reverse order are: ";
    for(int i = 4; i >= 0; i--)
    {
        cout << *(ptr + i) << " ";
    }
    return 0;
}