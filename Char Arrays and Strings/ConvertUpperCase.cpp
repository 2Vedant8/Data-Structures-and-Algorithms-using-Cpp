#include<bits/stdc++.h>
using namespace std;
void upperCase(char upper[])
{
    int i=0;
    int n = strlen(upper);
    for(int i=0; i<n; i++)
    {
        upper[i] = upper[i] - 'a' + 'A';
    }
    cout<<"The Uppercase WOrd is : "<<upper<<endl;
}
void lowerCase(char lower[])
{
    int i=0;
    int n = strlen(lower);
    for(int i=0; i<n; i++)
    {
        lower[i] = lower[i] - 'A' + 'a';
    }
    cout<<"The Lowercase WOrd is : "<<lower<<endl;
}
int main()
{
 char upper[1000];
 cout<<"Enter a Lowercase word "<<endl;
 cin.getline(upper , 1000);
 cout<<"The input word is : "<<upper<<endl;
 cout<<"Calling the function upperCase() "<<endl;
 upperCase(upper);
 char lower[1000];
 cout<<"Enter an uppercase word "<<endl;
 cin.getline(lower , 1000);
 cout<<"The input word is : "<<lower<<endl;
 cout<<"Calling the function lowerCase() "<<endl;
 lowerCase(lower);

 return 0;
}