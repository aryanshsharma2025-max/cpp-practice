#include <iostream>
using namespace std;
int main()
{
    int arr[5][5];
    int *ptr = &arr[0][0];
    int a , b;
    cout << "Enter the number of rows and columns of array: ";
    cin >> a >> b;
    cout << "Enter the elements of array: ";
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cin >> *(ptr + (i * b) + j);
        }
    }
    cout << "Enter the element to be searched: ";
    int search;
    cin >> search;
    bool found = false;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            if(*(ptr + (i * b) + j) == search)
            {
                found = true;
                cout << "Element found at position: (" << i << ", " << j << ")" << endl;
                break;
            }
        }
        if(found)
            break;
    }
    if(!found)
    {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}