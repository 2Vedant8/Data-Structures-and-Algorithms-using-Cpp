#include<bits/stdc++.h>
using namespace std;
void solve( vector<int>& arr ,  int i, int sum , int& maxi)
{
    if(i>=arr.size())
    {
        maxi = max(sum , maxi);
        return;
    }
    //include
    
    solve(arr, i+2 , sum+arr[i] , maxi );
    
    //excludee
    solve(arr, i+1 , sum, maxi );


}
int main()
{
    int n;
    cout << "Enter the number of elements in the array " << endl;
    cin >> n;
    cout << "Enter the elements of the array" << endl;
    vector<int> arr(n);
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    int maxi = INT_MIN;
    int i = 0;
    solve(arr, i , sum , maxi);

    cout<<maxi<<endl;
 return 0;
}