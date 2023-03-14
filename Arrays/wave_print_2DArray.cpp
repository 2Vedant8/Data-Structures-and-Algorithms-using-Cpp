#include <bits/stdc++.h>
using namespace std;
void read(vector<vector<int>> &arr, int m, int n)
{
    cout << "ENter the elements of the array: " << endl;
    for (int i = 0; i < m; i++)
    {
        arr[i].resize(n);
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void print(vector<vector<int>> arr, int m, int n)
{
    cout << "The Initial 2D array is : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void waveprint(vector<vector<int>> arr, int m, int n)
{
    cout << "The waveprint array is : " << endl;
    for (int j = 0; j < arr[0].size(); j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < arr.size(); i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = arr.size() - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main()
{
    int n, m;
    cout << "Enter the number of rows : " << endl;
    cin >> m;
    cout << "Enter the number of columns : " << endl;
    cin >> n;
    vector<vector<int>> arr(m);
    read(arr, m, n);
    print(arr, m, n);
    waveprint(arr, m, n);
}