#include <bits/stdc++.h>
using namespace std;
void findmax(int arr[], int n, int i, int &maxi)
{
    if (i >= n)
    {
        return;
    }
    cout << "i = " << i << " arr[i] = " << arr[i] << " maxi = " << maxi << endl;
    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }
    findmax(arr, n, i + 1, maxi);
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
    int maxi = INT_MIN;
    findmax(arr, n, i, maxi);
    cout << "The MAximum Element in the array is : " << maxi;
    return 0;
}