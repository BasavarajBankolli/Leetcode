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
private:
    // Return pair of (LCA node, max depth from this node)
    pair<TreeNode*, int> dfs(TreeNode* node) {
        if (!node) return {nullptr, 0};

        auto left = dfs(node->left);
        auto right = dfs(node->right);

        if (left.second > right.second)
            return {left.first, left.second + 1};
        else if (right.second > left.second)
            return {right.first, right.second + 1};
        else
            return {node, left.second + 1}; 
    }

public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return dfs(root).first;
    }
};
