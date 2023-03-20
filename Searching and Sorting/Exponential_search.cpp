#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> arr, int start, int end ,int target)
{
    cout << "Binary Search" << endl;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid]==mid)
        {
            return mid;

        }
        else if( target >arr[mid])
        {
            start = mid +1;
        }
        else{
            end  = mid -1;
        }
        mid= (start+end)/2;
    }
}

int exponentialsearch(vector<int> arr, int n, int target)
{
    cout << "Exponential Search" << endl;
    if (arr[0] == target)
    {
        return 0;
    }
    int i=1;
    while(i<n && arr[i]<=target)
    {
        i = i*2;
    }
    cout << "start=" << i/2 << " end=" << min(i, n-1) << endl;
    return binarysearch(arr, i/2, min(i, n-1) , target);
}

int main()
{
    int n, target;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    cout << "Enter the target" << endl;
    cin >> target;
    vector<int> arr(n);
    cout << "Enter the elements in array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = exponentialsearch(arr, n, target);
    cout<<ans<<endl;
    return 0;
}