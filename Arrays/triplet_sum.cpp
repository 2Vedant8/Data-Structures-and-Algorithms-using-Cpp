#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k, l, m, key;

    // Input the number of elements in the array
    cout << "Enter the no. of elements in array" << endl;
    cin >> n;

    // Input the key to find the triplets
    cout << "The sum of triplet should be equal to which number?" << endl;
    cin >> key;

    // Create an array of size n
    vector<int> arr(n);
    cout << "Enter the elements of Array : " << endl;
    for (i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    // Loop over the array and find the triplets
    for (j = 0; j < arr.size(); j++)
    {
        int element1 = arr[j];
        for (int k = j + 1; k < arr.size(); k++)
        {
            int element2 = arr[k];
            for (int l = k + 1; l < arr.size(); l++)
            {
                int element3 = arr[l];
                for (m = l + 1; m < arr.size(); m++)
                { int element4=arr[m];

                    if (element1 + element2 + element3 + element4 == key)
                    {
                        cout << "{ " << element1 << " , " << element2 << " , " << element3 <<" , "<<
                        element4<< " }" << endl;
                    }
                }
            }
        }
    }
    return 0;
}