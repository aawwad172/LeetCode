#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.size() < needle.size()) { return -1; }

        int needlePointer = 0;
        int haystackPointer = 0;
        int solutionPointer = -1;

        while (haystackPointer < haystack.size() && needlePointer < needle.size()) {
            if (haystack[haystackPointer] == needle[needlePointer]) {
                // found a match
                if (solutionPointer == -1) {
                    solutionPointer = haystackPointer;
                }
                needlePointer++;
            }
            else {
                haystackPointer = haystackPointer - needlePointer;
                solutionPointer = -1;
                needlePointer = 0;
            }
            haystackPointer++;
        }
        if (needlePointer == needle.size()) {
            return solutionPointer;
        }

        return -1;
    }
};