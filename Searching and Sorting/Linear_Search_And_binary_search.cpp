#include <bits/stdc++.h>
using namespace std;
int linearsearch(int arr[1000], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "The target found by linear search is at index : " << i << endl;
        }
    }
    return 0;
}
int binarysearch(int arr[1000], int n, int target)
{
    cout<<"Target Found by binary search is at Index : ";
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int n;
    cout << "No. of element" << endl;
    cin >> n;
    int arr[1000];
    cout<<"Enter the elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target" << endl;
    cin >> target;
    linearsearch(arr, n, target);
    cout << binarysearch(arr,n,target);
    return 0;
}