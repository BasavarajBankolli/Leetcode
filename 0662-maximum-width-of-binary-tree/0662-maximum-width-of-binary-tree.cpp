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
    int lvlOrder(TreeNode* root){
        if (!root -> left && !root->right) return 1;

        long long mx = 1;
        int i = 0;
        queue<TreeNode*> q;
        queue<long long> qi;
        q.push(root);
        qi.push(i);

        while (!q.empty()){
            int sz = q.size();
            mx = max(mx, qi.back() - qi.front() + 1);
            for (int i = 0; i < sz; i++) {
                TreeNode* tmp = q.front();
                int val = qi.front();
                q.pop();
                qi.pop();


                if (tmp -> left) { 
                    q.push(tmp -> left);
                    qi.push(1LL * 2*val + 1);
                }
                if(tmp -> right){
                    q.push(tmp -> right);
                    qi.push(1LL * 2*val + 2);
                }
            }
        }
        return mx;

    } 
    int widthOfBinaryTree(TreeNode* root) {
        return lvlOrder(root);
    }
};