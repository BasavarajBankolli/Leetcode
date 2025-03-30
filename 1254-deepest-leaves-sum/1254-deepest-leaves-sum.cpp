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
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;
        queue<TreeNode*> q;
        q.push(root); int cnt = 0;
    
        while(!q.empty()){
            int sz = q.size();
            sum = 0;

            for(int i = 0; i < sz; i++) {
                TreeNode* f = q.front();
                sum += f->val;
                q.pop();

                if (f -> left) q.push(f -> left);
                if (f  -> right) q.push(f -> right);
            }
        }

        return sum;
        
    }
};