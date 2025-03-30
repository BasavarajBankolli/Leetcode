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
    void traversal(TreeNode *node,priority_queue <int, vector<int>> &vals, int k) {
        if (!node) return;

        traversal(node -> left, vals, k);
        vals.push(node -> val);
        if (vals.size() > k) vals.pop();
        traversal(node -> right, vals, k);
    }


    int kthSmallest(TreeNode* root, int k) {
        priority_queue <int, vector<int>> a;
        traversal(root, a, k);

        return a.top();
    }
};