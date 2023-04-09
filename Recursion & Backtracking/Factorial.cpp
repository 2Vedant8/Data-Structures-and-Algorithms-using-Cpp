#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    cout<<"Factorial of "<<n<<endl;
    if(n==1)
    {
        return 1;
    }
    int ans = n * factorial(n-1);
    cout<<"Factorial of "<<n<<" is "<<ans<<endl;
    return ans;
}
int main()
{
    cout<<" Enter the value of N"<<endl;
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans;
 return 0;
}