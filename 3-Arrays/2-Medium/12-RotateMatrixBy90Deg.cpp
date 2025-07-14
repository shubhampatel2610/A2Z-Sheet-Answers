#include <bits/stdc++.h>
using namespace std;

void rotateImage(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    for (int r = 0; r < n; r++)
    {
        for (int c = r + 1; c < n; c++)
        {
            if (r != c)
            {
                swap(matrix[r][c], matrix[c][r]);
            }
        }
    }

    for (int r = 0; r < n; r++)
    {
        reverse(matrix[r].begin(), matrix[r].end());
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < n; j++)
        {
            int ele;
            cin >> ele;
            row.push_back(ele);
        }
        matrix.push_back(row);
    }

    rotateImage(matrix);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}