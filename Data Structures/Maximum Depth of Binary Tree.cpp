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
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0; // Return 0 for an empty tree
        }

        if (!root->left && !root->right) {
            return 1; // Return 1 for a leaf node
        }

        int leftDepth = 0;
        int rightDepth = 0;

        if (root->left) {
            leftDepth = maxDepth(root->left);
        }

        if (root->right) {
            rightDepth = maxDepth(root->right);
        }

        // Handle missing child nodes
        if (!root->left || !root->right) {
            return std::max(leftDepth, rightDepth) + 1;
        }

        return std::max(leftDepth, rightDepth) + 1;
    }
};