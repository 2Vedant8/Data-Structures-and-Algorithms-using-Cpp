#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n;
    int arr[1000];
    int mini = INT_MAX;
    cout << "Ente rthe size of array " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    cout<<" The minimum element in array is "<< mini<< endl;

    return 0;
}