/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:

    vector<vector<int>> result;
    void BFS(TreeNode *node) {
        queue<TreeNode *> q;
        q.push(node);

        int i = 0;
        while (!q.empty()) {
            int size = q.size();
            vector<int> currentLevel;
            for (int i = 0; i < size; i++) {
                TreeNode *n = q.front();
                q.pop();
                currentLevel.push_back(n->val);
                if (n->left) { q.push(n->left); }
                if (n->right) { q.push(n->right); }
            }
            // add the current value to our results array and remove it from the front of the queue before
            result.push_back(currentLevel);
            i++;
        }
    }

    vector<vector<int>> levelOrder(TreeNode *root) {
        if (!root) { return result; }
        BFS(root);
        return result;
    }
};