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
    int mx = INT_MIN;

    int dfs(TreeNode* node) {
        if (!node) return 0;

        int lsum = max(0, dfs(node -> left));
        int rsum = max(0, dfs(node -> right));

        mx = max(mx, lsum + rsum + node -> val);
        return node -> val + max(lsum, rsum);

    }

    int maxPathSum(TreeNode* root) {
        dfs(root);
        return mx;
    }
};