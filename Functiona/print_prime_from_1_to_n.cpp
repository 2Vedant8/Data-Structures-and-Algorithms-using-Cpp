#include <iostream>
using namespace std;
bool IsPrime(int n)
{
    int i = 2;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        bool prime = IsPrime(i);
        if (prime)
        {
            cout << i << " ";
        }
    }

    return 0;
}