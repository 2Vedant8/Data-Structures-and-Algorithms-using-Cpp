#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout<<"ENter the elements of array "<< endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // storing the start and end index
    int start = 0;
    int end = n-1;

    // swaping the elements
    while(start<=end)
    {     
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<< " ";
    }


 return 0;
}