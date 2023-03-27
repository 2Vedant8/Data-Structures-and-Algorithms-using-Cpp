#include <bits/stdc++.h>

using namespace std;

// This function reverses each word in a string
string reverseWords(string s)
{
    int i = 0; // Index of the first character of a word
    for (int j = 0; j <= s.size(); j++) // Iterate through each character of the string
    {
        // If we reach the end of a word, reverse it
        if (s[j] == ' ' || j == s.size()) // We have reached the end of a word if we have found a space or we have reached the end of the string
        {
            cout << "Reversing " << i << ", " << j << endl; // This line prints the range of characters that will be reversed
            reverse(s.begin() + i, s.begin() + j); // This line reverses the characters in the range [i, j)
            i = j + 1; // Next word starts after the space
        }
    }
    return s; // Return the reversed string
}

int main()
{
    string s;
    cout << "Enter the string to be reversed:" << endl;
    getline(cin, s);
    cout << "The reversed string is:" << endl;
    cout << reverseWords(s) << endl;

    return 0;
}