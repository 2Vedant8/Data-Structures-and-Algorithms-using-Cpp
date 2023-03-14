#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENter the no. to be checked: " << endl;
    cin >> n;
    // prime number is a number which is divisible by 1 and itself only
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number" << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "Prime number" << endl;
    }

    return 0;
