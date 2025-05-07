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
    string smll;

    void dfs(TreeNode* node, string &s){
        if (!node) return;

        s.push_back(node -> val + 'a');
        if (!node -> left && !node -> right) {
            string tmp = s;
            reverse(tmp.begin(), tmp.end());
            
            if (smll.empty() || tmp < smll) smll = tmp;
        }
        
        dfs(node -> left, s);
        dfs(node -> right, s);
        
        s.pop_back();
    }

    string smallestFromLeaf(TreeNode* root) {
        string s = "";
        dfs(root, s);

        return smll;
    }
};