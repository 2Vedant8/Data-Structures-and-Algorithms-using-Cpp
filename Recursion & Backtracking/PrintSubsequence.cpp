#include<bits/stdc++.h>
using namespace std;
void subsequence(string x , string output , int i, vector<string>&v)
{
    if(i>=x.length())
    {
        // cout<<output<<endl;
        v.push_back(output);
        return;
    }
    //exclude walaaaaa casee
    subsequence(x , output , i+1, v);

    //include walaa casee
    output.push_back(x[i]);
    subsequence(x , output , i+1, v);
}
int main()
{
cout<<"Enter the String"<<endl;
 string x;
 cin>>x;
 string output = "";
 int i=0;
 vector<string>v;
 subsequence(x , output , i, v);
 for(auto val:v)
 {
    cout<<val<<" ";
 }
 return 0;
}