#include <iostream>
using namespace std;
int main()
{
    int row, col, rowcount, colcount;
    cout << "Enter the no. of rows : " << endl;
    cin >> rowcount;
    cout << "Enter the no. of colums : " << endl;
    cin >> colcount;
    for (row = 0; row < rowcount; row++)
    {
        if (row == 0 || row == rowcount - 1)
        {
            for (col = 0; col < colcount; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (col = 0; col < colcount-2; col++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}