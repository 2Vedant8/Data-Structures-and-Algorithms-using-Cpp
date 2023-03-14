#include<iostream>
using namespace std;
int main()
{
//valid triangle condition if sum of any two sides is greater than the thrid side
int a , b , c;
cout<<"Enter the sides of the triangle"<<endl;
cin>>a>>b>>c;
if(a+b>c && b+c>a && a+c>b)
{
    cout<<"Valid Triangle";
}
else{

    cout<<"invalid triangle";
}

 return 0;
}