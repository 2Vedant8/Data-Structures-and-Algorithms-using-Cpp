#include <iostream>
using namespace std;

int main()
{
    int arr[1000]; //Declare an array of size 1000
    int n;
    cout << "Enter the elements in Array " << endl;
    cin >> n;
    cout<<"Enter the elements :"<< endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; //Take input for each element
    }
    int start = 0;
    int end = n - 1;
    while (true)
    {
        if (start > end)
            break;
        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {

            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
            start++;
            end--;
    }
    return 0;
}