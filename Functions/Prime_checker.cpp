#include <iostream>
using namespace std;
bool IsPrime(int n)
{
    int i = 2;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
        else
            return true;
    }
}
int main()
{
    int n;
    cin >> n;
    bool prime = IsPrime(n);
    if (prime)
    {
        cout << "It is a Prime Number" << endl;
    }
    else
    {
        cout << "Not a Prime Number" << endl;
    }
    return 0;
}