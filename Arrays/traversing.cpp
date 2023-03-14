#include <iostream>
using namespace std;

int main()
{
    int n; //declaration of a variable of type integer
    int arr[100]; //declaration of an array of 100 integers
    cin>>n; //input of n by the user
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i]; //input of the array elements
    }
    for(int i=0; i<n; i++) //loop for displaying the array elements
    {
        cout<<arr[i]<<" "; //output of the array elements
    }
    return 0;
}