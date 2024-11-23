#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0) { return 0; }
        if (nums.size() == 1) {
            if (nums[0] != val) {
                return 1;
            }
            else {
                return 0;
            }
        }

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            if (nums[left] == val) {
                if (nums[right] != val) {
                    nums[left++] = nums[right--];
                }
                else { right--; }
            }
            else { left++; }
        }
        return left;
    }
};