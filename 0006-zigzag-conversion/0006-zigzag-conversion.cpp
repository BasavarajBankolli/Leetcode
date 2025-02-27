class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows < 2) {
            return s;
        }

        vector<string>mp(numRows, "");

        int i = 0, r = 0;
        
        while(i < s.size()){
            while (i < s.size() && r < numRows){
                mp[r++] += s[i++];
            }
            r -= 2;
            while(i < s.size() && r > -1){
                mp[r--] += s[i++];
            }
            r += 2;
        }

        string res;   
        for (string &st: mp){
            res += st;
        }

        return res;
    }
};