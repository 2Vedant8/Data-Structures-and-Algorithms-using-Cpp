#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the no. of elements in array" << endl;
    cin >> n;
    int arr[1000];
    cout << "Enter the elements in the array" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int zero = 0;
    int one = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0) // if the element at position i is 0
        {
            zero++; // increment the count of 0
        }
        if (arr[i] == 1) // if the element at position i is 1
        {
            one++; // increment the count of 1
        }
    }
    cout << "No. of Zeros are " << zero << endl;
    cout << "No. of ones are " << one << endl;
    return 0;
}