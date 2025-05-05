class Solution {
public:
    long long mod = 1e9 + 7;
    int numTilings(int n) {
        if (n < 3) return n;
        else if (n == 3) return 5;

        vector<long long> dp(n+1);
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 5;

        for (int i = 4; i <= n; i++) {
            dp[i] = (2*dp[i-1] + dp[i-3]) % mod;
        }

        return dp[n];
    }
};