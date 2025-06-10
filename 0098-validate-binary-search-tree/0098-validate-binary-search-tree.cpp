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
    bool ok = true;
    int dfs(TreeNode* node, long mn, long mx) {
        if (!node) return 0;

        if (node->val <= mn || node->val >= mx)
            ok = false;

        dfs(node->left, mn, node->val);
        dfs(node->right, node->val, mx);
        return node->val;
    }

public:
    bool isValidBST(TreeNode* root) {
        if(!root || !root -> left && !root -> right) return true;
        dfs(root, LONG_MIN, LONG_MAX);
        return ok;
    }
};
