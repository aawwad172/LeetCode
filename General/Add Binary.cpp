#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        // Making a has the bigger string!
        if (a.length() < b.length()) { swap(a, b); }

        // Adding zeros until both have the same length!
        while (b.length() < a.length()) { b = "0" + b; }

        string carry = "0";
        string result = "";
        for (int i = a.length() - 1; i >= 0; i--) {
            if (a[i] == '1' and b[i] == '1') {
                if (carry == "1") {
                    result = "1" + result;
                }
                else { result = "0" + result; }
                carry = "1";
            }
            else if (a[i] == '0' and b[i] == '0') {
                if (carry == "1") {
                    result = "1" + result;
                    carry = "0";
                }
                else {
                    result = "0" + result;
                }
            }
            else {
                if (carry == "1") {
                    result = "0" + result;
                    carry = "1";
                }
                else {
                    result = "1" + result;
                }
            }
        }
        if (carry == "1") { result = "1" + result; }
        return result;
    }
};