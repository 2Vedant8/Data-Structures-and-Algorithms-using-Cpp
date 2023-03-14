#include<iostream>
using namespace std;

void printarray(int a[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }
}

void inc(int a[], int size)
{
    a[0]= a[0]+10;   //increment the first element of the array by 10
    printarray(a,size);   //print the updated array
}

int main()
{
    int arr[]= { 5 , 6};  //define the array
    int size = 2;   //define the size of the array
    inc(arr,size);  //call the function
    return 0;
}