#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    bool firstRowZero = false, firstColZero = false;

    for (int r = 0; r < m; r++)
    {
        if (matrix[r][0] == 0)
        {
            firstColZero = true;
        }
    }

    for (int c = 0; c < n; c++)
    {
        if (matrix[0][c] == 0)
        {
            firstRowZero = true;
        }
    }

    for (int r = 1; r < m; r++)
    {
        for (int c = 1; c < n; c++)
        {
            if (matrix[r][c] == 0)
            {
                matrix[r][0] = 0;
                matrix[0][c] = 0;
            }
        }
    }

    for (int r = 1; r < m; r++)
    {
        for (int c = 1; c < n; c++)
        {
            if (matrix[0][c] == 0 || matrix[r][0] == 0)
            {
                matrix[r][c] = 0;
            }
        }
    }

    if (firstColZero)
    {
        for (int r = 0; r < m; r++)
        {
            matrix[r][0] = 0;
        }
    }

    if (firstRowZero)
    {
        for (int c = 0; c < n; c++)
        {
            matrix[0][c] = 0;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < m; j++)
        {
            int ele;
            cin >> ele;
            row.push_back(ele);
        }
        matrix.push_back(row);
    }

    setZeroes(matrix);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}