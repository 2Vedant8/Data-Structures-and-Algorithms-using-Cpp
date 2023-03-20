
#include<bits/stdc++.h>

using namespace std;

int binarysearch(vector<int>arr, int n, int target)
{
    int s=0;
    int e= arr.size()-1;
    int mid = s + (e-s)/2; //finding the middle element of the array

    while(s<=e) //repeat the loop as long as the start is less than or equal to end
    {
        cout<<"Searching between "<<s<<" and "<<e<<endl;
        if(arr[mid]==target) //if the middle element is equal to target, return it
        {
            cout<<"Element found at position "<<mid<<endl;
            return mid;
        }
        if(arr[mid-1]>=0 && arr[mid-1]==target) //if the element before the middle is equal to the target, return it
        {
            cout<<"Element found at position "<<mid-1<<endl;
            return mid-1;
        }
        if(arr[mid+1]<arr.size() && arr[mid+1]==target) //if the element after the middle is equal to the target, return it
        {
            cout<<"Element found at position "<<mid+1<<endl;
            return mid+1;
        }
        if(arr[mid]>target) //if the middle element is greater than the target, then move the end to the middle element
        {
            cout<<"Element not found, moving end to position "<<mid-1<<endl;
            e=mid-1;
        }
        if(arr[mid]<target) //if the middle element is less than the target, then move the start to the middle element
        {
            cout<<"Element not found, moving start to position "<<mid+1<<endl;
            s=mid+1;
        }
        mid=s+(e-s)/2; //finding the middle element again
    }
    cout<<"Element not found"<<endl;
    return -1; //if the target is not found in the array, return -1

}
int main()
{
 int n;
 cin>>n;
 vector<int>arr(n);
 for(int i=0; i<arr.size(); i++)
 {
    cin>>arr[i];
 }
 int target;
 cin>>target;
int ans = binarysearch(arr,n,target); //calling the function
 cout<<"Answer is " << ans;
 return 0;
}
