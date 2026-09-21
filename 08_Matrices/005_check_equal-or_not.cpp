#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int A[rows][cols], B[rows][cols];
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> A[i][j];

    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> B[i][j];

    bool equal = true;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (A[i][j] != B[i][j])
            {
                equal = false;
                break;
            }
        }
    }

    if (equal)
        cout << "Matrices are equal.";
    else
        cout << "Matrices are not equal.";

    return 0;
}
