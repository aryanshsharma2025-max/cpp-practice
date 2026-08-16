#include <iostream>
using namespace std;

int main()
{
    int a[10], b[10];
    int n, k = 0;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int found = 0;

        for (int j = 0; j < k; j++)
        {
            if (a[i] == b[j])
            {
                found = 1;
            }
        }

        if (found == 0)
        {
            b[k] = a[i];
            k++;
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}