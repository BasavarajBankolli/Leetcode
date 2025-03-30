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

    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        int lvl = 0;

        while(!q.empty()) {
            int sz = q.size();
            vector <TreeNode*> temp;

            for (int i = 0; i < sz; i++) {
                TreeNode* f = q.front();
                q.pop();
                temp.push_back(f);
                if(f -> left) q.push(f->left);
                if(f -> right) q.push(f->right);

            }

            if (lvl % 2) { 
                for (int i = 0; i < temp.size() / 2; i++) {
                    swap(temp[i]->val, temp[temp.size() - i - 1]->val);
                }
            }
            lvl++;
        }

        return root;
    }
};