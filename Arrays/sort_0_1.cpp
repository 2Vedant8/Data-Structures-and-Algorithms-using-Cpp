#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of elements in array" << endl;
    cin >> n;
    vector<int> arr(n);
    int start = 0;
    int end = arr.size() - 1;
    int temp = 0;
    // Create an array of size n

    cout << "Enter the elements of Array : " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    while (temp != end)
    {
        cout << "temp: " << temp << " start: " << start << " end: " << end << endl;
        if (arr[temp] == 0)
        {

            swap(arr[start], arr[temp]);
            start++;
            temp++;
        }
        else
        {
            swap(arr[end], arr[temp]);
            end--;
        }
    }
    for (auto value : arr)
    {
        cout << value << " ";
    }

    return 0;
}