#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the no. of elements of 1st Array : " << endl;
    cin >> n;
    cout << "Enter the no. of elements of 2nd Array : " << endl;
    cin >> m;
    vector<int> brr(m);
    vector<int> arr(n);
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
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i]; // Store the value of arr[i] in the variable element
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                brr[j] = INT_MIN;
                ans.push_back(element); // Store the value of element in the vector ans
            }
        }
    }
    cout << "The Final intersection array is : ";
    for (auto value : ans)
    {
        cout << value << " ";
    }

    return 0;
}