#include<bits/stdc++.h>
using namespace std;
int getlength(char name[])
{
    int length = 0;
    int i=0;
    while(name[i]!= '\0')
    {
        length++;
        i++;
    }
    cout<<"The length is : "<< length;
    return length;
}
int main()
{
 char name[1000];
 cin.getline(name, 1000);
 //add log statements
 cout<<"Read the name from the console: "<<name<<endl;
 cout<<"Passing the name to getlength function"<<endl;
 getlength(name);
 return 0;
}