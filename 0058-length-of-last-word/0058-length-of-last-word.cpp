class Solution {
public:
    int lengthOfLastWord(string s) {
        bool ok = 0;
        int len = 0;
        for (int i = s.size()-1; i >= 0; i--) {
            if (s[i] != ' '){
                len++, ok = 1;
            }
            else if (ok) return len;
        }
        return len;
    }
};