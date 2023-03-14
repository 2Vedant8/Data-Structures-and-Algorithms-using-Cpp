#include <bits/stdc++.h>
using namespace std;
void minimum(int arr[10][10], int m, int n) // Function to find minimum element in the 2D array
{
    int mini = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Comparing " << arr[i][j] << " with " << mini << endl;
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }
    cout << "the Minimum ELement in the 2D array is : " << mini << endl;
}
void maximum(int arr[10][10], int m, int n) // Function to find maximum element in the 2D array
{
    int maxi = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Comparing " << arr[i][j] << " with " << maxi << endl;
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    cout << "the maximum ELement in the 2D array is : " << maxi << endl;
}
int main()
{
    int n, m;
    cout << "Enter the number of rows : " << endl;
    cin >> m;
    cout << "Enter the number of columns : " << endl;
    cin >> n;
    int arr[10][10];
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    minimum(arr, m, n); // calling minimum function
    maximum(arr, m, n); // calling maximum function
    return 0;
}