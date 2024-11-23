#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 1;

        for (int right = 1; right < nums.size(); right++) {
            // Check if the value of Right is not equal to value of Right - 1
            // This means the value that is in the Right pointer is new!
            if (nums[right] != nums[right - 1]) {
                // We should duplicate the value that is in the right to the left position.
                nums[left] = nums[right];
                left++; // Then move the left to the right pointer!
            }
        }

        return left;
    }
};