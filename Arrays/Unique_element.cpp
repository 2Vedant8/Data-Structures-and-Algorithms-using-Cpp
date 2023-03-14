#include <iostream>
#include <vector>
using namespace std;
int findunique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cout << "ENter the no. of elements : " << endl;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int UniqueElement = findunique(arr);
    cout << "The Unique element is : " << UniqueElement << endl;

    return 0;
}