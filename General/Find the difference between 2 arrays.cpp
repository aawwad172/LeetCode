#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// todo: Solve this problem!

class Solution {
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2) {
        unordered_map<int, int> table1;
        vector<vector<int>> result;
        for (int i = 0; i < nums1.size(); i++) {
            table1.insert(nums1[i], i);
        }

        for (int i = 0; i < nums2.size(); i++) {
            if (table1.find(nums2[i]) == table1.end()) {
                result[1][i] = nums2[i];
            }
        }

        unordered_map<int, int> table2;
        for (int i = 0; i < nums2.size(); i++) {
            table2.insert(nums2[i], i);
        }
        for (int i = 0; i < nums1.size(); i++) {
            if (table2.find(nums1[i]) == table2.end()) {
                result[0][i] = nums1[i];
            }
        }
        return result;
    }
};