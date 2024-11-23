#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int deleteAndEarn(vector<int> &nums) {
        for (int i = 0; i < nums.size(); i++) {
            // Remove the number nums[i] and earn it's pointes
            for (int j = 0; j < nums.size(); j++) {
                // Delete all the nums[i] + 1 and nums[i] - 1 and earn their points.

            }

        }

    }
};