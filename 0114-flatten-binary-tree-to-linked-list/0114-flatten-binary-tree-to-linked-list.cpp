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
    vector<int> vals;
    void preorder(TreeNode *node){
        if (!node) return; 
        
        vals.push_back(node->val);
        preorder(node -> left);
        preorder(node -> right);
    }

    void flatten(TreeNode* root) {
        if(!root) return;
        preorder(root);

        TreeNode *node = root;
        node -> left = nullptr;
        for (int i = 1; i < vals.size(); i++) {
            node -> right = new TreeNode(vals[i]);
            node = node -> right;
        }
    }
};