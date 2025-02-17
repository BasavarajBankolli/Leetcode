class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int cnt = 1;

        for (int i = 1; i < s.length(); i++, cnt++) {
            if (s[i] != s[i-1] && cnt == k) return true;
            if (s[i] != s[i-1]) cnt = 0;
        }

        return cnt == k;
    }
};