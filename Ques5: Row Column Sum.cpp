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

    // Sum of each row
    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0;

        for (int j = 0; j < cols; j++)
        {
            rowSum += matrix[i][j];
        }

        cout << "Sum of Row " << i + 1 << " = "
             << rowSum << endl;
    }

    // Sum of each column
    for (int j = 0; j < cols; j++)
    {
        int columnSum = 0;

        for (int i = 0; i < rows; i++)
        {
            columnSum += matrix[i][j];
        }

        cout << "Sum of Column " << j + 1 << " = "
             << columnSum << endl;
    }

    return 0;
}
