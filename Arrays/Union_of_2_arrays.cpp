#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Take the input from the user.
    int n, m;
    cout << "Enter the no. of elements of 1st Array : " << endl;
    cin >> n;
    cout << "Enter the no. of elements of 2nd Array : " << endl;
    cin >> m;
    // Store the elements of the array into a vector.
    vector<int> arr(n);
    vector<int> brr(m);
    cout << "Enter the elements of 1st Array : " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the elements of 2nd Array : " << endl;
    for (int i = 0; i < brr.size(); i++)
    {
        cin >> brr[i];
    }
    // Store the elements of both the vectors into a single vector.
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < brr.size(); i++)
    {
        ans.push_back(brr[i]);
    }
    // Print the final array.
    cout << " The Final Union array is : " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        
        cout << ans[i] << " ";
    }

    return 0;
}