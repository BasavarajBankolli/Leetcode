class Solution {
public:
    string pat = "abc";
    void backtrack(int n, string cur, vector<string> &res){
        if (cur.size() == n) { 
            res.push_back(cur);
            return;
        }

        for (char c: pat) {
            if (cur.empty() || cur.back() != c)
                backtrack(n, cur + c, res);
        }

    } 


    string getHappyString(int n, int k) {

        vector<string> res = {};
        backtrack(n, "", res);

        if (k > res.size()) return "";
        return res[k-1];

    }
};