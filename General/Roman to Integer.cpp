#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        unordered_map<char, int> map = {
            { 'I', 1 },
            { 'V', 5 },
            { 'X', 10 },
            { 'L', 50 },
            { 'C', 100 },
            { 'D', 500 },
            { 'M', 1000 }
        };

        // I will iterate over the array for the size() - 1
        for (int i = 0; i <= s.length() - 1; i++) {
            int number1 = map[s[i]];

            // Now we should check if we reached the end - 1 of the array so we don't go outside
            // of the array limits!
            if (i == s.length() - 1) {
                result += number1;
                break;
            }
            // If we didn't reach the end of the array now we can declare a variable to store
            // the value of the key s[i + 1]!
            int number2 = map[s[i + 1]];

            // If the letter value is less than the next one to him that means we should subtract
            // them from each other!
            // Then I incremented the i so we can skip the letter
            if (number1 < number2) {
                result += number2 - number1;
                i++;
            }
            else {
                // Here we add just the first number because it's not less than the second number
                // so it's not gonna be subtracted from the next one.
                result += number1;
            }
        }
        return result;
    }
};