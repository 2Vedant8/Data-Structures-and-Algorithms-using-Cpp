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
void replacespaces(char name[], char symbol)
{
    int i = 0;
    while (name[i] != '\0')
    {
        if (name[i] == ' ')
        {
            name[i] = symbol;
        }
        i++;
    }
    cout << "The string after replacing spaces is : " << name << endl;
}
int main()
{
    char name[1000];
    char symbol;
    cin.getline(name, 1000);
    cout << "Enter the symbol you want to replace spaces with : " << endl;
    cin >> symbol;
    replacespaces(name, symbol);
    return 0;
}