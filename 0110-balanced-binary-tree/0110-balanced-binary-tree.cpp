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
    int depth(TreeNode* node){
        if(!node) return 0;

        int lh = depth(node -> left);
        int rh = depth(node -> right);

        if(lh == -1 || rh == -1) return -1;
        if(abs(rh-lh) > 1) return -1;

        return 1 + max(lh, rh);
    }
    bool isBalanced(TreeNode* root) {
        int res = depth(root);

        if (res == -1) return false;

        return true;
    }
};