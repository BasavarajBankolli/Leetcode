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
    int sum = 0;
    void dfs(TreeNode* node, int &num){
        if(!node) return;

        num = num*10 + node->val;
        if (!node -> left && !node -> right){
            sum += num;
        }
        else{
            if (node -> left) dfs(node -> left, num);
            if (node -> right) dfs(node -> right, num);
        }
        num /= 10;
    }
    int sumNumbers(TreeNode* root) {
        int num = 0;
        dfs(root, num);
        return sum;
    }
};