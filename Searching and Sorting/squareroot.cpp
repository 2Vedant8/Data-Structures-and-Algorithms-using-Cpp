#include <bits/stdc++.h>
using namespace std;

// function to find square root of the number
int findsqrt(int n)
{
    int target = n;        // initializing target
    int s = 0;             // initializing start
    int e = n;             // initializing end
    int ans = -1;          // initializing answer
    int mid = (s + e) / 2; // initializing mid
    while (s <= e)
    {
        cout << "Mid: " << mid << endl;
        if (mid * mid == target)
        {
            return mid;
        }
        if ((mid * mid) > target)
        {
            cout << "Inside first if" << endl;
            e = mid - 1;
        }
        else
        {
            ans = mid;
            cout << "Inside second if" << endl;
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}
// main function
int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;

    int precision;
    cout << "Enter the number of digits : " << endl;
    cin >> precision;
    int ans = findsqrt(n); // calling the function
    cout << ans<<endl;

    long double finalans = ans;
    long double step = 0.1;
    for (int i = 0; i < precision; i++)
    {
        for (long double j = finalans; j * j <= n; j += step)
        {
            finalans = j;
        }
        step = step / 10;
    }
    cout<<"The final ans with precision is : "<<finalans;
    return 0;
}