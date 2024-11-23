#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int rob(vector<int> &nums) {
        int n = nums.size();

        if (n == 1) { return nums[0]; }

        int *solution = new int[n];
        solution[0] = nums[0];
        solution[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            solution[i] = max(solution[i - 1], nums[i] + solution[i - 2]);
        }

        int result = max(solution[n - 1], solution[n - 2]);
        delete[]solution;

        return result;
    }
};