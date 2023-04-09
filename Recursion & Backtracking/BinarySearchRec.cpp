#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>& arr, int s, int e, int& target)
{

    int mid = s + (e - s) / 2;
    if (s > e)
    {
        return -1;
    }
    if (arr[mid] == target)
    {
        return mid;
    }
    if (arr[mid] > target)
    {
        return binarysearch(arr, s, mid - 1, target);
    }
    else
    {
        return binarysearch(arr, mid + 1, e, target);
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements in the array " << endl;
    cin >> n;
    cout << "Enter the elements of the array" << endl;
    vector<int> arr(n);
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter target : " << endl;
    int target;
    cin >> target;
    int s = 0;
    int e = arr.size();
    int ans = binarysearch(arr, s, e, target);
    cout<<"The Target is at Index "<<ans<<endl;

    return 0;
}