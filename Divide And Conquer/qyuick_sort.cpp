#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e)
{
    // choose pivot element
    int pivotindex = s;
    int pivotelement = arr[s];

    // step 2 -> find right position for pivot element and place it there
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotelement)
        {
            count++;
        }
    }
    // loop se bahar aakr mere pass [pivot index ki positionr eady hogi
    int rightindex = s + count;
    swap(arr[pivotindex], arr[rightindex]);
    pivotindex = rightindex;

    // step 3
    //  left me chote right me bade
    int i = s;
    int j = e;

    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] <= pivotelement)
        {
            i++;
        }
        while (arr[j] > pivotelement)
        {
            j--;
        }

        // 2 case ho sakte h
        // 1 - you found the elements to swap
        // 2- no need to swap
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i], arr[j]);
        }
    }
        return pivotindex;
}
void quicksort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // partition logic, return pivot index
   int p = partition(arr, s, e);

    // recursive calls
    // left
    quicksort(arr, s, p - 1);

    // right
    quicksort(arr, p + 1, e);
}
int main()
{
    int arr[] = {1, 4, 6, 3, 2, 6, 8, 32, 8};
    int n = 9;

    int s = 0;
    int e = n - 1;
    quicksort(arr, s, e);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}