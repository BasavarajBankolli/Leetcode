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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        queue <TreeNode*> q;
        if (!root) return {};

        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            res.push_back(q.back() -> val);
            for(int i = 0; i < sz; i++) {
                TreeNode *tmp = q.front();
                q.pop();

                if (tmp -> left) q.push(tmp -> left);
                if (tmp -> right) q.push(tmp -> right);
            }
        }

        return res;

    }
};