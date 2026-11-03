#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    cout << "Enter the elements in the array: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "Elements before sorting: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nElements after sorting: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}