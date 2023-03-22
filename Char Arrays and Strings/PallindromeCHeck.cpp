#include<bits/stdc++.h>
using namespace std;
bool checkpallindrome(char word[])
{
    int i=0;
    int j = strlen(word) - 1;
    while(i<=j)
    {
        if(word[i]!=word[j])
        {
            cout<<word[i]<<word[j]<<endl;
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    char word[1000];
    cin.getline(word , 1000);
    if(checkpallindrome(word))
    {
        cout<<"It is a Pallindrome"<<endl;
    }
    else{
        cout<<"Not a pallindrome"<<endl;
    }

 return 0;
}