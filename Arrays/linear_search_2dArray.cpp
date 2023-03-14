#include <bits/stdc++.h>
using namespace std;
bool linearsearch(int arr[10][10], int m, int n, int key)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == key)
                return true;
        }
    }
    return false;
}
int main()
{
    int n, m, key;
    cout << "Enter the number of rows : " << endl;
    cin >> m;
    cout << "Enter the number of columns : " << endl;
    cin >> n;
    int arr[10][10];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the element to search " << endl;
    cin >> key;
    if (linearsearch(arr, m, n, key))
    {
        cout << "The element is PRESENT";
    }
    else
    {
        cout << "The element is NOT PRESENT";
    }

    return 0;
}