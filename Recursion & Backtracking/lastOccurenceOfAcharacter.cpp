#include<bits/stdc++.h>
using namespace std;
void lastocc(string&s, char x , int i, int& ans )
{
    //base case
    if(i>=s.size())
    {
        return;
    }


    //ek case
    if(s[i]==x)
    {
        ans = i;
    }

    //recursion
    lastocc(s , x , i+1,  ans);
}
int main()
{
 string s;
 cin>>s;
 char x;
 cin>>x;
 int ans = -1;
 int i=0;
 lastocc(s , x , 0,  ans);
 cout<<ans<<endl;
 return 0;
}