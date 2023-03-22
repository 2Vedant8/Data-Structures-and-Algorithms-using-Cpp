#include <bits/stdc++.h>
using namespace std;
int getlength(char name[])
{
    int i = 0;
    int length = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    cout << "The length of the string is : " << length << endl;
    return length;
}
void reverse(char name[])
{
    int start = 0;
    int end = getlength(name) - 1;
    while (start <= end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
    cout << "The reversed word is : " << name << endl;
}

int main()
{
    char name[1000];
    cin.getline(name, 1000);
    reverse(name);
    return 0;
}