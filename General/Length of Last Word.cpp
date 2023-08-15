#include <iostream>
using namespace std;

class Solution {
public:
    string trim(string s) {
        while (s.back() == ' ' and !s.empty()) { s.pop_back(); }
        return s;
    }

    int lengthOfLastWord(string s) {
        // First we should trim the end of the string of white spaces!
        string newString = trim(s);

        int i = newString.length() - 1;
        while (i >= 0) {
            if (newString[i] == ' ') { break; }
            i--;
        }
        return newString.length() - i;
    }
};