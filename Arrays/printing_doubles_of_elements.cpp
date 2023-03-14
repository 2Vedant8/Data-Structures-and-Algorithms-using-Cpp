#include<iostream>
using namespace std;
int main()
{
    int n; // Declare a variable n to hold the number of elements in the array
    cout<<"Enter the no. of elements you want in array(Less than 100)"<<endl;
    int arr[100]; // Declare an array of size 100 to hold the elements
    cin>>n; // Read the number of elements in the array
    cout<<"ENter The Elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i]; // Read each element of the array
    }
    cout<<"The Double of elements are : " << endl;
    for(int j=0; j<n; j++)
    {
        cout<<2*arr[j]<<" "; // Print the double of each element
    }
 return 0;
}