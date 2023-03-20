#include <bits/stdc++.h>
using namespace std;
int findpivot(vector<int> arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid + 1 < arr.size() && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid - 1 > 0 && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }
        if (arr[s] >= arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = findpivot(arr, n);
    cout << "pivot element is : " << arr[ans] << " and it is at index : " << ans;
    return 0;
}