#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Value of n"<<endl;
    cin>>n;
    cout<<"............................."<< endl;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
