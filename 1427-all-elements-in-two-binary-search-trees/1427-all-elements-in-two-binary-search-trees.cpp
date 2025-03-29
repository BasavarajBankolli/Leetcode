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
    void inorder(TreeNode *node, vector<int> &vec) {
        if(!node) return;

        inorder(node -> left, vec);
        vec.push_back(node->val);
        inorder(node -> right, vec);
    }

    vector<int> merge(vector<int> &a, vector<int> &b) {
        int i = 0, j = 0, k = 0;
        vector<int> res(a.size()+b.size());

        while(i < a.size() && j < b.size()){
            if (a[i] <= b[j]) res[k++] = a[i++];
            else res[k++] = b[j++];

        }

            while(j < b.size()) res[k++] = b[j++];
            while(i < a.size()) res[k++] = a[i++];
        return res;

    } 
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> a,b;
        
        inorder(root1, a);
        inorder(root2, b);

        return merge(a,b);
    }
};