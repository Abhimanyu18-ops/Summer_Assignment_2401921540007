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
class Solution {
    int maxSum;
public:
    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;
        maxGain(root);
        return maxSum;
    }
    
    int maxGain(TreeNode* node) {
        if(!node) return 0;
        int left = max(0, maxGain(node->left));
        int right = max(0, maxGain(node->right));
        maxSum = max(maxSum, node->val + left + right);
        return node->val + max(left, right);
    }
};
