#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void printMatrix(const vector<vector<double>> &matrix, int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= n; ++j)
        {
            cout << setw(10) << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void gaussianElimination(vector<vector<double>> &matrix, int n)
{
    for (int i = 0; i < n; ++i)
    {
        // Partial Pivoting
        int maxRow = i;
        for (int k = i + 1; k < n; ++k)
        {
            if ((matrix[k][i]) > (matrix[maxRow][i]))
            {
                maxRow = k;
            }
        }       
        swap(matrix[i], matrix[maxRow]);

        // Forward Elimination
        for (int k = i + 1; k < n; ++k)
        {
            double factor = matrix[k][i] / matrix[i][i];
            for (int j = i; j <= n; ++j)
            {
                matrix[k][j] -= factor * matrix[i][j];
            }
        }
    }

    // Back Substitution
    vector<double> solution(n, 0);
    for (int i = n - 1; i >= 0; --i)
    {
        solution[i] = matrix[i][n];
        for (int j = i + 1; j < n; ++j)
        {
            solution[i] -= matrix[i][j] * solution[j];
        }
        solution[i] /= matrix[i][i];
    }

    // Display the solution
    cout << "Solution:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "x" << i + 1 << " = " << solution[i] << endl;
    }
}

int main()
{
    int n;
    // Get the size of the system of linear equations
    cout << "Enter the number of equations: ";
    cin >> n;
    // Initialize the augmented matrix
    vector<vector<double>> matrix(n, vector<double>(n + 1, 0));
    // Get the coefficients and constants from the user
    cout << "Enter the augmented matrix coefficients:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j <= n; ++j)
        {
            cin >> matrix[i][j];
        }
    }
    // Perform Gaussian Elimination
    gaussianElimination(matrix, n);

    return 0;
}
