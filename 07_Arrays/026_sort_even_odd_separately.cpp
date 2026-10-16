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

    for (int i = 0; i < evenCount - 1; i++)
    {
        for (int j = i + 1; j < evenCount; j++)
        {
            if (even[i] > even[j])
            {
                int temp = even[i];
                even[i] = even[j];
                even[j] = temp;
            }
        }
    }

    for (int i = 0; i < oddCount - 1; i++)
    {
        for (int j = i + 1; j < oddCount; j++)
        {
            if (odd[i] > odd[j])
            {
                int temp = odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
            }
        }
    }

    cout << "Sorted even elements: ";
    for (int i = 0; i < evenCount; i++)
    {
        cout << even[i] << " ";
    }

    cout << "\nSorted odd elements: ";
    for (int i = 0; i < oddCount; i++)
    {
        cout << odd[i] << " ";
    }

    return 0;
}
