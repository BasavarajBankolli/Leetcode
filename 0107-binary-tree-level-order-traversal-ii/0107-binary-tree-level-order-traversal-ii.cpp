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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root) return {};

        vector<vector<int>> res;
        queue <TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            int sz = q.size();
            vector<int> lvl;

            for (int i = 0; i < sz; i++) {
                TreeNode *node = q.front();
                q.pop();

                if (node->left)  q.push(node -> left);
                if (node->right) q.push(node->right);
                lvl.push_back(node -> val);
            }
            res.push_back(lvl);
        }

        reverse(res.begin(), res.end());
        return res;
    }
};