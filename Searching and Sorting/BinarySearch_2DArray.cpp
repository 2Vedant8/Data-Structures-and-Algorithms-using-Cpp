#include <bits/stdc++.h>
using namespace std;
void readarray(vector<vector<int>> &arr, int row, int col)
{
    cout << "ENter the elements of the array: " << endl;
    for (int i = 0; i < row; i++)
    {
        arr[i].resize(col);
        for (int j = 0; j < col; j++)
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

bool binarysearch(vector<vector<int>> arr, int target, int row, int col)
{
    int s = 0;
    int e = row * col - 1;
    int mid = (s+e)/2; 

        int rowindex = mid / col;
        int colindex = mid % col;
    while (s <= e)
    {

        if (arr[rowindex][colindex] == target)
        {
           cout<<rowindex<<colindex<<endl;
            return true;
        }
        else if (arr[rowindex][colindex] < target)
        {
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return false;
}
int main()
{
    int row, col, target;
    cout << "Enter the number of rows in the array : " << endl;
    cin >> row;
    cout << "Enter the number of columns in the array : " << endl;
    cin >> col;
    cout << "Enter the target" << endl;
    cin >> target;
    vector<vector<int>> arr(row);
    readarray(arr, row, col);
    print(arr, row, col);
    int ans = binarysearch(arr, row, col, target);
    if(ans){
        cout<<"FOund"<<endl;
    }
    else{
        cout<<"Not found";
    }

    return 0;
}