#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n;
    int arr[1000];
    int maxi = INT_MIN;
    cout << "Enter the no. of elements in array" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    cout << "The Max No. is " << maxi << endl;
    return 0;
}