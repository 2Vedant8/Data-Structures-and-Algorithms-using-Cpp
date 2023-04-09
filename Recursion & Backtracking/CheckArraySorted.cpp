#include<bits/stdc++.h>
using namespace std;
bool checksorted(vector<int> &arr , int &n , int index)
{
    if(index==n-1)
    {
        return true;
    }
    //ek case sambhaal rahaaa huuu
    if(arr[index+1]<arr[index])
    {
        return false;
    }
    //baaki recursion sambhaaal legaaaa
    return checksorted(arr, n , index+1);
}
int main()
{
 int n;
 cout<<"Enter the number of elements in the array "<<endl;
 cin>>n;
 vector<int>arr(n);
 int index = 0;
 for(int i = 0; i<n;i++)
 {
    cin>>arr[i];
 }
bool sorted = checksorted(arr , n , index);
 if(sorted)
 {
    cout<<"Array is sorted"<<endl;
 }
 else{
    cout<<"Array is not sorted"<<endl;
 }
 return 0;
}