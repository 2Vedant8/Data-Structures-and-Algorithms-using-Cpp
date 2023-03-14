#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number upto which even no. are required : "<<endl;
    cin>>n;
    cout<<"The Even NUmbers Before "<< n << " are : "<< endl;
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        cout<< i <<"  ";
    }
 return 0;
}