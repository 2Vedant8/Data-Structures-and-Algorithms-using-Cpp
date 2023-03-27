#include<bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t) {
        int hash[256]= {0};
        bool isTcharsmapped[256] = {0};
        cout<<"s: "<<s<<" t: "<<t<<endl;
        for(int i=0; i<s.size(); i++)
        {
            if(hash[s[i]]==0 &&  isTcharsmapped[t[i]] ==0)
            {
                hash[s[i]] = t[i];
                isTcharsmapped[t[i]] = true;
                cout<<"mapping s[i]: "<<s[i]<<" to t[i]: "<<t[i]<<endl;
            }
            else
            {
                cout<<"not mapping s[i]: "<<s[i]<<" to t[i]: "<<t[i]<<endl;
            }
        }
        for(int i=0; i<s.size(); i++)
        {
            cout<<"s[i]: "<<s[i]<<" t[i]: "<<t[i]<<endl;
            cout<<"char(hash[s[i]]): "<<char(hash[s[i]])<<endl;
            cout<<"hash[s[i]]: "<<hash[s[i]]<<endl;
            if(char(hash[s[i]])!=t[i])
            {
                cout<<"s[i]: "<<s[i]<<" t[i]: "<<t[i]<<endl;
                cout<<"char(hash[s[i]]): "<<char(hash[s[i]])<<endl;
                cout<<"hash[s[i]]: "<<hash[s[i]]<<endl;
                return false;
            }
        }
        return true;

    }
int main()
{
 string s,t;
 cin>>s;
 cin>>t;
 if(isIsomorphic(s,t))
 {
        cout<<"YESSSSSSSSSSSSSSSSSS"<<endl;
 }
 else{
        cout<<"NOOOOOOOOOOOOOOOOOOOOOOOOOO"<<endl;
 }
 return 0;
}
