#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number of rows : " << endl;
    cin >> m;
    cout << "Enter the number of columns : " << endl;
    cin >> n;
    int arr[m][n];
    cout<<"Enter The Elements of the 2D Array row wise: "<< endl;
    for(int i=0; i< m; i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The Elements when enterted row wise are : "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //COLUMN WISE EVERYTHING
    cout<<"Enter The Elements of the 2D Array col wise: "<< endl;
    for(int i=0; i< m; i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[j][i];
        }
    }
    cout<<"The Elements when enterted col wise are : "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}