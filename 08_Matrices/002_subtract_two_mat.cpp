#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of matrix: ";
    cin >> n;

    vector<int> a(n), b(n), c(n);

    cout << "Enter the elements in matrix A:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the elements in matrix B:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    // subtraction
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }

    cout << "Result after subtraction: ";
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}
