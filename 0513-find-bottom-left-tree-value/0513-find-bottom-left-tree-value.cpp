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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        TreeNode *res = root;

        q.push(root);

        while(!q.empty()) {
            int sz = q.size();
            res = q.front();
            for (int i = 0; i < sz; i++) {
                TreeNode *n = q.front();
                q.pop();

                if (n->left) q.push(n->left);
                if (n->right) q.push(n->right);
            }
        }

        return res -> val;
    }
};