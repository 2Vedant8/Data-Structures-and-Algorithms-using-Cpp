#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int maxLength = 0;
        int currLength = 1;

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                currLength++;
            } else {
                maxLength = max(maxLength, currLength);
                currLength = 1;
            }

            // Check if we have a consecutive pair of the same digit at i-2 and i
            if (i > 1 && s[i - 2] == s[i]) {
                currLength = 2;
            }
        }

        maxLength = max(maxLength, currLength);

        return maxLength;
    }
};

int main() {
    Solution solution;

    // Test case 1
    string s1 = "52233";
    int result1 = solution.longestSemiRepetitiveSubstring(s1);
    cout << "Longest semi-repetitive substring in \"" << s1 << "\" is: " << result1 << endl;

    // Test case 2
    string s2 = "5494";
    int result2 = solution.longestSemiRepetitiveSubstring(s2);
    cout << "Longest semi-repetitive substring in \"" << s2 << "\" is: " << result2 << endl;

    // Test case 3
    string s3 = "1111111";
    int result3 = solution.longestSemiRepetitiveSubstring(s3);
    cout << "Longest semi-repetitive substring in \"" << s3 << "\" is: " << result3 << endl;

    return 0;
}
