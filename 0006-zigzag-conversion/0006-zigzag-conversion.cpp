class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows < 2) {
            return s;
        }
        
        map <int, string> mp;
        int i = 0, r = 0;
        while(i < s.size()){
            while (i < s.size() && r < numRows){
                mp[r++].push_back(s[i++]);
            }
            r -= 2;
            while(i < s.size() && r > -1){
                mp[r--].push_back(s[i++]);
            }
            r += 2;
        }

        string res = "";   
        for (auto &[k, st]: mp){
            res += st;
        }

        return res;
    }
};