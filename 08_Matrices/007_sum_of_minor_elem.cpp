#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of square matrix:";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter elements of the matrix: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][n - 1 - i];
    }
    cout << "sum of main diagonal elements = " << sum << endl;
    return 0;
}