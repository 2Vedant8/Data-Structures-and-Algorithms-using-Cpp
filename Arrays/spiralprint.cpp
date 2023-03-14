#include <bits/stdc++.h>
using namespace std;
void read(vector<vector<int>> &matrix, int m, int n)
{
    cout << "ENter the elements of the array: " << endl;
    for (int i = 0; i < m; i++)
    {
        matrix[i].resize(n);
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void print(vector<vector<int>> matrix, int m, int n)
{
    cout << "The Initial 2D array is : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int m = matrix.size();
    int n = matrix[0].size();
    int total_elements = m * n;

    int StartingRow = 0;
    int EndingCol = n - 1;
    int EndingRow = m - 1;
    int StartingCol = 0;

    int count = 0;
    while (count < total_elements)
    {
        // Print Starting row
        for (int i = StartingRow; i <= EndingCol && count < total_elements; i++)
        {
            ans.push_back(matrix[StartingRow][i]);
            count++;
        }
        StartingRow++;

        // Print ending col
        for (int i = StartingRow; i <= EndingRow && count < total_elements; i++)
        {
            ans.push_back(matrix[i][EndingCol]);
            count++;
        }
        EndingCol--;

        // Print ending row
        for (int i = EndingCol; i >= StartingCol && count < total_elements; i--)
        {
            ans.push_back(matrix[EndingRow][i]);
            count++;
        }
        EndingRow--;

        // Print Starting col
        for (int i = EndingRow; i >= StartingRow && count < total_elements; i--)
        {
            ans.push_back(matrix[i][StartingCol]);
            count++;
        }
        StartingCol++;
    
    }

    return ans;
}
int main()
{
    int n, m;
    cin >> m;
    cin >> n;
    vector<vector<int>> matrix(m);
    read(matrix, m, n);
    print(matrix, m, n);
    spiralOrder(matrix);
     return 0;
}