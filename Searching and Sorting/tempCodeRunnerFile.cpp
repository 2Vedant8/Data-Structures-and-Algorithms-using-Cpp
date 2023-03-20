class Solution
{
public:
    bool possiblesolution(int A[], int N, int M, int mid)
    {
        int pagesum = 0;
        int count = 1;
        for (int i = 0; i < N; i++)
        {

            if (A[i] > mid)
            {
                return false;
            }
            if (pagesum + A[i] > mid)
            {
                count++;
                pagesum = A[i];
                if (count > M)
                {
                    return false;
                }
            }
            else
            {
                pagesum += A[i];
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
            int mid = (start + end) >> 1;
           if(possiblesolution(A, N, M , mid))
           {
                ans = mid;
                end = mid - 1;
           }
           else{
                start = mid + 1;
           }
        }
        return ans;
    }
};
