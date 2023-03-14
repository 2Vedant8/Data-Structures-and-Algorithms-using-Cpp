#include <bits/stdc++.h>
using namespace std;
int moving(vector<int> arr, int n)
{
    int low, high;
    low = 0;
    high = arr.size() - 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[low] < 0) //checking if the element is negative
            low++;
        else if (arr[high] > 0)//checking if the element is positive
            high--;
        else
        {
            swap(arr[low], arr[high]); //swapping the elements
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter the number of elements in the array" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout<<"The Resultant Array is : ";
    moving(arr,n);
    return 0;
}