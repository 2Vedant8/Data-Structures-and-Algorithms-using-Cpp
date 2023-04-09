#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    if(n==1)
    {
        cout<<n<<" ";
        return;
    }

    cout<<n<<" ";
    print(n-1);

}
int main()
{
 cout<<"Enter the value of n"<<endl;
 int n;
 cin>>n;
 print(n);

 return 0;
}