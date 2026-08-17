#include <iostream>
using namespace std;

int main()
{
    int matrix[10][10];
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Transpose of matrix:\n";

    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
