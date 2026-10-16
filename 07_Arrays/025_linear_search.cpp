#include <iostream>
using namespace std;

int main()
{
    int arr[50], n, key, position = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            position = i;
            break;
        }
    }

    if (position == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at position " << position + 1;
    }

    return 0;
}
