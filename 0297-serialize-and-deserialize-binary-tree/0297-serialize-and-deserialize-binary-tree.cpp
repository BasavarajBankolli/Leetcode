/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string res = "";
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            int sz = q.size();
            for(int i = 0; i < sz; i++) {
                TreeNode* f = q.front();
                q.pop();
                if(!f) res += "N,";
                else res += to_string(f->val) + ",";

                if(f){
                    q.push(f->left);
                    q.push(f->right);
                }
            }
        }
        return res;

    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data.empty() || data == "N") return NULL;

        stringstream tree(data);
        string s;

        getline(tree, s, ',');
        if (s == "N") return NULL;
        TreeNode *root = new TreeNode(stoi(s));
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode *f = q.front();
            q.pop();

            if (!getline(tree, s, ',')) break;
            if(s == "N") f -> left = NULL;
            else{
                f -> left = new TreeNode(stoi(s));
                q.push(f -> left);
            }

            if (!getline(tree, s, ',')) break;
            if (s == "N") f -> right = NULL;
            else{
                f -> right = new TreeNode(stoi(s));
                q.push(f -> right);
            }
        }

        return root;

    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));