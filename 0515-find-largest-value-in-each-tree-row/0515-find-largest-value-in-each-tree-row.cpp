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
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        
        vector<int> res;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int sz = q.size(), mx = INT_MIN;
            for(int _ = 0; _ < sz; _++) {
                TreeNode *f = q.front();
                mx = max(mx, f->val);
                q.pop();

                if (f -> left) q.push(f -> left);
                if (f -> right) q.push(f -> right);

            }
            res.push_back(mx);
        }
        return res;
    }
};