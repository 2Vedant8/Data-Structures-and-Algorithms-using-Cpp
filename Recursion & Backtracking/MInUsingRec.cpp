#include <bits/stdc++.h>
using namespace std;
void findmin(int arr[], int n, int i, int &mini)
{
    if (i >= n)
    {
        return;
    }
    if (arr[i] < mini)
    {
        mini = arr[i];
    }
    cout << " The value of mini is " << mini << endl;
    findmin(arr, n, i + 1, mini);
}
int main()
{
    int arr[1000];
    int n;
    cout << "Enter the number of elements in the array " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int mini = INT_MAX;
    findmin(arr, n, i, mini);
    cout << "The Minimum Element in the array is : " << mini;
    return 0;
}