//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    bool possiblesolution(int arr[], long long int n, long long int k, long long int mid)
    {
        long long int timesum = 0;
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > mid)
            {
                return false;
            }
            if (timesum + arr[i] > mid)
            {
                count++;
                timesum = arr[i];
                if (count > k)
                {
                    return false;
                }
            }
            else
            {
                timesum = timesum + arr[i];
            }
        }
        return true;
    }

    long long minTime(int arr[], int n, int k)
    {
        long long int start = 0;
        long long int end =0;
        for(int i=0; i<n;i++)
        {
            end=end+arr[i];
        }
        int ans = -1;

        while (start <= end)
        {
            long long  mid = (start + end) >> 1;
            if (possiblesolution(arr, n, k, mid))
                
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
        int k, n;
        cin >> k >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minTime(arr, n, k) << endl;
    
    return 0;
}
// } Driver Code Ends