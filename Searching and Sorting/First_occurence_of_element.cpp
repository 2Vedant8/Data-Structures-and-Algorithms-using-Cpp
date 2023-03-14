#include<bits/stdc++.h>
using namespace std;

//Function to return the first occurence of the target element in the array
int firstoccurence(vector<int> arr, int n, int target)
{
    //start index of the array
    int start = 0;

    //end index of the array
    int end = arr.size()-1;

    //mid index of the array
    int mid = (start+end)/2;

    //variable to store the first occurence of the target element in the array
    int ans = -1;

    //binary search to find the first occurence of the target element in the array
    while(start<=end)
    {
        cout<<"start -> "<<start<<endl;
        cout<<"end -> "<<end<<endl;
        cout<<"mid -> "<<mid<<endl;

        //If the middle element is equal to the target element then we move the end to the left to find the first occurence of the target element in the array
        if(arr[mid]==target)
        {
            cout<<"arr[mid]==target"<<endl;
            ans = mid;
            end=mid-1;
        }

        //If the middle element is greater than the target element then we move the end to the left of the middle element
        else if(arr[mid]>target)
        {
            cout<<"arr[mid]>target"<<endl;
            end=mid-1;
        }

        //If the middle element is smaller than the target element then we move the start to the right of the middle element
        else if(arr[mid]< target)
        {
            cout<<"arr[mid]<target"<<endl;
            start=mid+1;
        }
        mid = (start+end)/2;
    }
    //Printing the first occurence of the target element in the array
    cout<<"The first occurence of "<<target<< " is at index : "<< ans<<endl;

    //returning the first occurence of the target element in the array
    return ans;
}

//Main function
int main()
{
    //variable to store the size of the array
    int n;

    //variable to store the target element
    int target;

    cout<<"Enter the size of array:"<<endl;
    cin>>n;

    //Vector to store the array
    vector<int>arr(n);

    cout<<"Enter the elements"<<endl;
    for(int i=0; i<arr.size() ;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the target"<<endl;
    cin>>target;

    firstoccurence(arr,n,target);

    return 0;
}
