#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int> &cost) {
        int n = cost.size();

        int *solution = new int[n];

        solution[0] = cost[0];
        solution[1] = cost[1];

        for (int i = 2; i < n; i++) {
            solution[i] = cost[i] + min(solution[i - 1], solution[i - 2]);
        }

        return min(solution[n - 1], solution[n - 2]);
    }
};