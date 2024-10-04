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
public:
    void minDist(TreeNode* root, int& prev, int& ans) {
        if (root == NULL) {
            return;
        }
        // Inorder traversal: left, root, right
        minDist(root->left, prev, ans);
        
        // If prev is not the initial value, calculate the difference
        if (prev != INT_MIN) {
            ans = min(ans, root->val - prev);  // Correct the min function
        }
        prev = root->val;  // Update prev to current node's value
        
        minDist(root->right, prev, ans);
    }

    int minDiffInBST(TreeNode* root) {
        int prev = INT_MIN;  // Initialize prev as the minimum integer
        int ans = INT_MAX;   // Initialize ans as the maximum integer
        minDist(root, prev, ans);
        return ans;
    }
};
