#include <iostream>
using namespace std;

int main()
{
    int n; //declare variable n
    cin >> n; //input value of n

    if (n <= 0) //if n is less than or equal to 0 then return 0
        return 0;

    for (int i = 0; i < n; i++) // loop from 0 to n
    {
        for (int j = i + 1; j <= n; j++) // loop from i+1 to n
        {
            if (j == 0 || j == i + 1 || i == 0 || j == n) // if j is 0 or j is i+1 or i is 0 or j is n then print j
                cout << j << " ";
            else
            {
                cout << "  "; // else print 2 spaces
            }
        }
        cout << endl;
    }
    return 0;
}
  