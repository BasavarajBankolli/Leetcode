class Solution {
public:
    int countHomogenous(string s) {
        if(s.size() == 1) return 1;
        
        int res = 0, n = s.size(), mod = 1e9+7;
        long cnt = 1L;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i-1]) cnt++;
            else{
                res = (res + (cnt*(cnt+1))/2) % mod;
                cnt = 1L;
            }
        }

        if (s[n-1] == s[n-2])
            return (res + (cnt*(cnt+1))/2) % mod;

        return (res + 1) % mod;
        
    }
};