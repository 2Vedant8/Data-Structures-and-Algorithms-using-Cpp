#include <iostream>
using namespace std;
int fact(int n) //function to calculate factorial of a number
{
    int fact = 1; //initializing fact to 1
    for (int i = 1; i <= n; i++) //loop to calculate factorial
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    cin >> n; //input number from user
    int ans = fact(n); //calling function fact
    cout << "Factorial of " << n << " is " << ans << endl; //displaying output
    return 0;
}