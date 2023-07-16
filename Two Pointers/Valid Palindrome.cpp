#include <iostream>
using namespace std;
class Solution {
public:

    string removeNo_AlphabetCharacter(string s) {
        string result;
        for (int i = 0; i < s.size(); i++) {
            char c = tolower(s[i]);
            if (isalnum(c)) {
                result += tolower(s[i]);
            }
        }
        return result;
    }

    bool isPalindrome(string s) {
        if (s.size() == 1) { return true; }

        string result = removeNo_AlphabetCharacter(s);
        if (result.size() == 1) { return true; }

        int i = 0;
        int j = result.size() - 1;
        while (i < j) {
            if (result[i] != result[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};