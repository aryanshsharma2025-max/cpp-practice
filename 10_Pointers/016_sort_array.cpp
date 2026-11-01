#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int *ptr = arr;
    cout << "Enter 5 Elements in Array: ";
    for(int i = 0 ; i < 5 ; i++)
    {
        cin >> *(ptr + i);
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(*(ptr + i) > *(ptr + j))
            {
                int temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    cout << "The sorted array is: ";
    for(int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }
    return 0;
}