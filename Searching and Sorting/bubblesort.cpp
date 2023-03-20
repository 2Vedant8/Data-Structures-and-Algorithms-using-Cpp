#include <bits/stdc++.h>
using namespace std;

int bubblesort(vector<int> &arr, int n) //function to sort the array
{
    for(int round = 1; round<n; round++) //loop to repeat the process of swapping of elements
    {
        int swapcount = 0; //variable to keep count of number of swaps
        for(int j=0; j<n-round; j++) //loop to compare each element with its adjacent element
        {
            if(arr[j]>arr[j+1]) //if element is greater than its adjacent element, swap them
            {
                swap(arr[j], arr[j+1]);
                swapcount ++; //increment swapcount
            }
        }
        if(swapcount==0) //if swapcount is 0, then break the loop
        break;
        cout << "Round " << round << endl;
        cout << "Array after round " << round << endl;
        for(int i = 0; i < arr.size(); i++) //loop to print the sorted array
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    cout << "The sorted array is" << endl;
    for(int i = 0; i < arr.size(); i++) //loop to print the sorted array
    {
        cout << arr[i] << " ";
    }
    return 0;
}
   
int main()
{
    int n; //variable to store number of elements in array
    cout << "Enter the no. of elements in array" << endl;
    cin >> n;
    vector<int> arr(n); //vector to store the array
    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < arr.size(); i++) //loop to input the elements in the array
    {
        cin >> arr[i];
    }
    cout << "The unsorted array is" << endl;
    for(int i = 0; i < arr.size(); i++) //loop to print the unsorted array
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubblesort(arr, n); //calling the function to sort the array
    return 0;
}