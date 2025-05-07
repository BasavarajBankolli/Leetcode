class Solution {
public:
    int beautySum(string s) {
        int res = 0, n = s.size();
        
        for (int i = 0; i < n; i++){
            int ref[26] = {0};
            for (int j = i; j < n; j++) {
                ref[s[j] - 'a']++;
                int mx = 0, mn = s.size();
                for (int a : ref) {
                    if (a) {
                        mx = max(mx, a);
                        mn = min(mn, a);
                    }
                }
                res += (mx - mn);
            }

        }
            
        return res;
    }
};