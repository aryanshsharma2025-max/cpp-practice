#include <iostream>
using namespace std;
int main()
{
    int arr1[3][3], arr2[3][3], product[3][3];
    int *ptr1 = &arr1[0][0];
    int *ptr2 = &arr2[0][0];
    cout << "Enter the elements of 3 x 3 matrix 1: ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> *(ptr1 + (i * 3) + j);
        }
    }
    cout << "Enter the elements of 3 x 3 matrix 2: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> *(ptr2 + (i * 3) + j);
        }
    }
    cout << "The product of the two matrices is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                product[i][j] += *(ptr1 + (i * 3) + k) * *(ptr2 + (k * 3) + j);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}