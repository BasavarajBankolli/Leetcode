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
    int mx = 0;
    int depth(TreeNode* node){
        if (!node) return 0;

        int lh = depth(node -> left);
        int rh = depth(node -> right);

        mx = max(lh + rh, mx);
        return 1 + max(lh, rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        depth(root);
        return mx;
    }
};