#include <iostream>
using namespace std;

int main() {
    int rows, cols, scalar;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[50][50]; // fixed size for simplicity (max 50x50)

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter scalar value: ";
    cin >> scalar;

    cout << "Result after scalar multiplication:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] * scalar << " ";
        }
        cout << endl;
    }

    return 0;
}
