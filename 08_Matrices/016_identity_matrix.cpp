//Identity matrix 
#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter Number of rows and columns: ";
    cin >> rows >> cols;
    int a[rows][cols];
    cout << "The identity matrix is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = 0;
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}