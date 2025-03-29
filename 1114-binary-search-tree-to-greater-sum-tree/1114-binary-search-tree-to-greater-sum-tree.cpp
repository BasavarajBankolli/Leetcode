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
    int cur = 0;
    void dfs(TreeNode* node){
        if (!node) return;

        dfs(node->right);

        cur += node->val;
        node -> val = cur;

        dfs(node->left);
       
    }

    TreeNode* bstToGst(TreeNode* root) {
        dfs(root);
        return root;
    }
};