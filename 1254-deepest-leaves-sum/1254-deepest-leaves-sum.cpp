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
    int lvl(TreeNode *node){
        queue<TreeNode*> q;
        int cnt = 0;
        if (!node) return 0;
        q.push(node); 

        while(!q.empty()){
            int sz = q.size();
            cnt++;


            for(int i = 0; i < sz; i++) {
                TreeNode* f = q.front();
                q.pop();

                if (f -> left) q.push(f -> left);
                if (f  -> right) q.push(f -> right);
            }
        }

        return cnt;
    }

    int deepestLeavesSum(TreeNode* root) {
        int ref = lvl(root);

        queue<TreeNode*> q;
        q.push(root); int cnt = 0;
        

        while(!q.empty()){
            int sz = q.size();
            cnt++;

            if (cnt == ref)  break;

            for(int i = 0; i < sz; i++) {
                TreeNode* f = q.front();
                q.pop();

                if (f -> left) q.push(f -> left);
                if (f  -> right) q.push(f -> right);
            }
        }

        int res = 0;
        while (!q.empty()) {
            TreeNode* front = q.front();
            res += front -> val;
            q.pop();
        }

        return res;
        
    }
};