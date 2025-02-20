class Solution {
public:
    string res;
    bool backtrack(int n, string cur, const unordered_set<string> &s){
        if (cur.size() == n){
            if(s.find(cur) == s.end()){
                res = cur;
                return true;
            }
            return false;
        }

        for (char c: {'0','1'}){
            if (backtrack(n, cur + c, s))
                return true;
        }
        return false;
    }

    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<string> st(nums.begin(),nums.end());
        backtrack(nums.size(), "", st);

        return res;
    }
};