#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    // create 2 arrays left and right
    int *left = new int[len1];
    int *right = new int[len2];

    // copy values
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // merge logic
    int leftindex = 0;
    int rightindex = 0;
    int mainindex = s;

    while (leftindex < len1 && rightindex < len2)
    {
        if (left[leftindex] < right[rightindex])
        {
            arr[mainindex++] = left[leftindex++];
            // mainindex++;
            // leftindex++;
        }
        else
        {
            arr[mainindex++] = right[rightindex++];
            // mainindex++;
            // rightindex++;
        }
    }

    // copylogic for left array
    while (leftindex < len1)
    {
        arr[mainindex++] = left[leftindex++];
    }

    // copylogic for right index
    while (leftindex < len2)
    {
        arr[mainindex++] = right[rightindex++];
    }
}

void mergesort(int *arr, int s, int e)
{
    // base case
    // s==e -> single element
    // s>e->Invalid array

    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;

    // left part sort karde recursion
    mergesort(arr, s, mid);

    // right part sort krde recursion
    mergesort(arr, mid + 1, e);

    // merge two sorted arrays
    merge(arr, s, e);
}
int main()
{
    int arr[] = {13,12,11,10,9,8,7,6,5,4,3,2,1};
    int s = 0;
    int n = 13;
    int e = n - 1;
    mergesort(arr, s, e);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}