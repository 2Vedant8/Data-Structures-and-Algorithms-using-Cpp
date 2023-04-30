#include <bits/stdc++.h>
using namespace std;
void printpermutations(string& str, int i)
{
    // base case
    if (i >= str.length())
    {
        cout << str << " ";
        return;
    }
    // ek case
    for (int j = i; j < str.length(); j++)
    {
        swap(str[i], str[j]);
        // recursive call
        printpermutations(str, i + 1);

        // backtracking
        swap(str[i], str[j]);
    }
}
int main()
{
    string str = "VED";
    int i = 0;
    printpermutations(str, i);
    return 0;
}