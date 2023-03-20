#include <bits/stdc++.h>
using namespace std;
int division(int dividend, int divisor)
{
    int s = 0;
    int e = dividend ;
    int mid = (s + e) / 2;
    int ans = -1;

    while (s <= e)
    {
        cout<<"s="<<s<<",e="<<e<<",mid="<<mid<<endl;
        if (mid * divisor == dividend)
        {
            return mid;
        }
        if (mid * divisor < dividend)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int dividend, divisor;
    cin >> dividend;
    cin>>divisor;
    int quotient = division(dividend, divisor);
    cout << quotient;

    return 0;
}