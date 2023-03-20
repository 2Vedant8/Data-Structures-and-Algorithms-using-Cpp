#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // function to check if mid is the minimum number of pages that can be allocated to each student.
    bool possiblesolution(int A[], int N, int M, int mid)
    {
        int pagesum = 0; // sum of pages read by each student
        int count = 1; // number of students
        for (int i = 0; i < N; i++)
        {
            cout << "A[i] : " << A[i] << " mid : " << mid << endl;
            if (A[i] > mid)
            {
                return false;
            }
            if (pagesum + A[i] > mid)
            {
                cout << "pagesum + A[i] > mid : " << pagesum + A[i] << " > " << mid << endl;
                count++;
                pagesum = A[i];
                if (count > M)
                {
                    return false;
                }
            }
            else
            {
                pagesum = pagesum + A[i];
            }
        }
        return true;
    }
    // Function to find minimum number of pages.
    int findPages(int A[], int N, int M)
    {
        if (M > N)
        {
            return -1;
        }
        int start = 0;
        int end = accumulate(A, A + N, 0);
        int ans = -1;

        while (start <= end)
        {
            int mid = (start + end) >> 1; //divide by 2 using shift operator
            if (possiblesolution(A, N, M, mid))
            {
                cout << "possiblesolution : " << mid << endl;
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

int main()
{
        int n; //number of books
        cin >> n;
        int A[100]; //array of books
        for (int i = 0; i < n; i++) //loop to input books
        {
            cin >> A[i];
        }
        int m; //number of students
        cin >> m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl; //output the result
    return 0;
}