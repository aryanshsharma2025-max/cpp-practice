#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, key, i;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the key to be searched: ";
    cin >> key;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            cout << "Key found at index: " << i;
            return 0;
        }
    }

    cout << "Key not found";

    return 0;
}