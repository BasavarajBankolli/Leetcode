class Solution {
public:
    int countSubstrings(string s) {
        int res = 0, n = s.size();

        auto check = [&] (int l, int r){
            while (l >= 0 && r < n && s[l] == s[r]){
                res++;
                l--;
                r++;
            }
        };

        for (int i = 0; i < n; i++) {
            check(i, i);
            check(i, i + 1);
        }

        return res;
    }
};