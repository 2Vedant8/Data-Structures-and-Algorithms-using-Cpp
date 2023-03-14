#include <bits/stdc++.h>
using namespace std;
void transposeArray(int arr[10][10], int m, int n, int transposeArr[10][10])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transposeArr[j][i] = arr[i][j];
        }
    }
}
void printarray(int arr[10][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, m;
    int arr[10][10];
    int transposeArr[10][10];
    cout << "Enter the number of rows : " << endl;
    cin >> m;
    cout << "Enter the number of columns : " << endl;
    cin >> n;
    cout << "ENter the elements of the 2D array" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Array before transpose : " << endl;
    printarray(arr, m, n);
    cout << "Array After transpose : " << endl;
    transposeArray(arr, m, n, transposeArr);
    printarray(transposeArr, m, n);

    return 0;
}