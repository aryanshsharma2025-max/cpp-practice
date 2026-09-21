#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    int a[10][10], b[10][10];
    cout << "Enter the rows amd columns of matrix A:";
    cin >> r1 >> c1;
    cout << "Enter the rows and columns of matrix B:";
    cin >> r2 >> c2;
    if (c1 != c2)
    {
        cout << "Matrix Multiplication not possible..!!";
        return 0;
    }
    cout << "Enter elements of matrix A:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter elements of matrix B:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> b[i][j];
        }
    }
    int c[10][10];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            c[i][j] = 0;

            for (int k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
        cout << "Resultant Matrix ( A X B ):\n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }
}