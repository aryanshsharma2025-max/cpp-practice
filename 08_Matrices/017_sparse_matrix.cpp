//Check the sparse matrix. 
#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter Number of rows and columns: ";
    cin >> rows >> cols;
    int a[rows][cols];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count > (rows * cols) / 2)
    {
        cout << "The matrix is a sparse matrix." << endl;
    }
    else
    {
        cout << "The matrix is not a sparse matrix." << endl;
    }
    return 0;
}