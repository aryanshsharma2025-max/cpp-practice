#include <iostream>
using namespace std;

int main()
{
    int arr[50], freq[50], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    cout << "\nFrequency of each element:\n";
    for (int i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            cout << arr[i] << " occurs " << freq[i] << " time(s)\n";
        }
    }

    return 0;
}
