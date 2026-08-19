#include <iostream>
using namespace std;

int main()
{
    int arr[50], n, evenCount = 0, oddCount = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Total even elements: " << evenCount << endl;
    cout << "Total odd elements: " << oddCount << endl;

    return 0;
}
