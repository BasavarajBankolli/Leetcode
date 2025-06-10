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
    int res = 0;
    void dfs(TreeNode* node, int mx, int mn) {
        if (!node) return;

        mx = max(mx, node -> val);
        mn = min(mn,node -> val);
        
        if (!node -> left && !node-> right) {
            res = max(mx-mn, res);
        }

        if (node -> left) dfs(node -> left, mx, mn);
        if (node -> right) dfs(node -> right, mx, mn);
    }
    int maxAncestorDiff(TreeNode* root) {
        dfs(root, 0, 1e5);
        return res;
    }
};