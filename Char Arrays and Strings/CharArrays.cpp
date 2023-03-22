#include <bits/stdc++.h>
using namespace std;
int getlength(char arr[])
{
    int length = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        cout << arr[i] << " ";
        length++;
        i++;
    }
    cout << endl;
    cout << "Length of the string is " << length << endl;
    return 0;
}
int main()
{
    char arr[1000];
    cin >> arr;
    getlength(arr);
    cout << strlen(arr);
    return 0;
}