#include<iostream>
using namespace std;
bool isEven(int n) //Function to check if the number is even or odd
{
    if(n%2==0){ //If the number is divisible by 2 then it is even
        return true;
    }
    else{
        return false; //If the number is not divisible by 2 then it is odd
    }
}
int main()
{
    int n;
    cin>>n; //Input the number
    if(n) //Check if the number is not equal to 0
    {
        bool even = isEven(n); //Call the function to check if the number is even or odd
        if(even) //If the number is even then print "Even"
        {
            cout<<"Even";
        }
        else{ //If the number is odd then print "Odd"
            cout<<"Odd";
        }
    }
    else{
        cout<<"Error"; //If the number is 0 then print "Error"
    }
 return 0;
}