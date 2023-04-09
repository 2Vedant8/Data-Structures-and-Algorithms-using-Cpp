#include <bits/stdc++.h>
using namespace std;
int coinChange(vector<int> &coins, int amount)
{
    if (amount == 0)
    {
        return 0;
    }
    if (amount < 0)
    {
        return -1;
    }
    int mini = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int ans = coinChange(coins, amount - coins[i]);
        if (ans != -1)
            mini = min(mini, ans + 1);
    }
    return mini == INT_MAX ? -1 : mini;
}
int main()
{
    int amount;
    vector<int>coins;
    int n;
    cin >> n;
    coins.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    cin >> amount;
    int ans = coinChange(coins, amount);
    cout << ans;
 
 return 0;
}