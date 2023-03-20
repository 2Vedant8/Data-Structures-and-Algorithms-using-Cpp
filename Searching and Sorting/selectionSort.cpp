#include <bits/stdc++.h>
using namespace std;
int selectionsort(vector<int> &arr, int n) // Define a function selectionsort that takes in a vector and an integer
{
    for (int i = 0; i < n; i++) // Loop from i=0 to i<n
    {
        int minindex = i; // Define minindex as i
        for (int j = i + 1; j < n; j++) // Loop from j=i+1 to j<n
        {
            if (arr[j] < arr[minindex]) // If arr[j] is less than arr[minindex]
            {
                minindex = j; // minindex = j
            }
        }
        swap(arr[i], arr[minindex]); // Swap arr[i] with arr[minindex]
        cout << arr[i] << " "; // Print arr[i]
    }
    return 0;
}
int main()
{

    int n;
    cout << "Enter the no. of elements in array" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << "The sorted array is" << endl;
    selectionsort(arr, n);
    return 0;
}