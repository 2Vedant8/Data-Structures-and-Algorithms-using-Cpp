#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k, key;

    cout<<"Enter the no. of elements in array"<<endl;
    cin>>n;

    cout<<"The sum of pair should be equal to which number?"<<endl;
    cin>>key;

    vector<int> arr(n);
    cout << "Enter the elements of Array : " << endl;
    for (i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    //O(n^2) Algorithm to find the pairs which sum up to the given number.
    for (j = 0; j < arr.size(); j++)
    {
        int element = arr[j];
        for (k = j + 1; k < arr.size(); k++)
        {
            if(element+arr[k]==key)
            cout << "{ " << element << " , " << arr[k] << " } ";
        }
    }
    return 0;
}