#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:

    int solve(int i, int j, vector<int> &n1, vector<int> &n2, vector<vector<int>> &memo) {
        if (i <= 0 || j <= 0) { return 0; }
        if (memo[i][j] != -1) { return memo[i][j]; }

        if (n1[i - 1] == n2[j - 1]) { memo[i][j] = 1 + solve(i - 1, j - 1, n1, n2, memo); }
        else {
            memo[i][j] = max(solve(i - 1, j, n1, n2, memo), solve(i, j - 1, n1, n2, memo));
        }
        return memo[i][j];
    }

    int maxUncrossedLines(vector<int> &nums1, vector<int> &nums2) {
        vector<vector<int>> solution(nums1.size() + 1, vector<int>(nums2.size() + 1, -1));


        return solve(nums1.size(), nums2.size(), nums1, nums2, solution);
    }
};