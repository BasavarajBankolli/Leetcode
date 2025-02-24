class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].length(), i;
        string res = strs[0];

        for (string s: strs) {
            i = 0;

            while (i < n) {
                if (s[i] != res[i]){
                    res = s.substr(0, i);
                    n = i + 1;
                }
                i++;
            }
        }

        return res;
        
    }
};