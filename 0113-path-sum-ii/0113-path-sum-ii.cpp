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
    vector<vector<int>> res;
    int tar;
    void dfs(TreeNode* node, vector<int> &tmp, int sum) {
        if (!node) return;

        tmp.push_back(node->val);
        sum += node->val;

        if (!node->left && !node->right && sum == tar) {
            res.push_back(tmp);
        }

        dfs(node->left, tmp, sum);
        dfs(node->right, tmp, sum);

        tmp.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        tar = targetSum;
        vector<int> tmp;
        int sum = 0;
        dfs(root, tmp, sum);

        return res;
    }
};