#include <iostream>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        // I am using an array of booleans to check if the letter appeared in the string.
        bool arr[26] = { false };

        // Adding the letters to the array!
        for (int i = 0; i < sentence.length(); i++) {
            arr[sentence[i] - 'a'] = true;
        }

        // Checking if all the letters is true, if so then it's a Pangram!
        for (int i = 0; i < 26; i++) {
            if (!arr[i]) { return false; }
        }
        return true;
    }
};