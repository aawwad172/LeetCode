#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool startsWith(const string& str, const string& prefix) {
        return (str.substr(0, prefix.length()) == prefix);
    }
    string longestCommonPrefix(vector<string>& strs) {
        string pref = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            if (startsWith(strs[i], pref) == false) {
                if (pref.size() == 0) { return ""; }
                pref.pop_back();
                i--;
            }
        }
        return pref;
    }
};