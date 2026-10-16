#include <iostream>
using namespace std;

int main()
{
    int arr[50], even[50], odd[50], n, evenCount = 0, oddCount = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
        else
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
    }

    cout << "Even elements: ";
    for (int i = 0; i < evenCount; i++)
    {
        cout << even[i] << " ";
    }

    cout << "\nOdd elements: ";
    for (int i = 0; i < oddCount; i++)
    {
        cout << odd[i] << " ";
    }

    return 0;
}
