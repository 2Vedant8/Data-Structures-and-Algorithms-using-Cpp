#include <bits/stdc++.h>
using namespace std;
int m,n;
void printsum(int arr[][10] , int m ,int  n)
{
    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<"The sum of "<<i+1<<" row is " << sum<<endl;
    }
}
int main()
{
    int n, m;
    cout << "Enter the number of rows : " << endl;
    cin >> m;
    cout << "Enter the number of columns : " << endl;
    cin >> n;
    int arr[10][10];
    cout << "Enter the elements of the 2D array : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The Given 2d array is : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }

    cout << "The row wise sum of the given 2D Array is : " << endl;
    printsum(arr,m,n);

    return 0;
}