class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = amount + 1;
        int dp[n];
        fill(dp, dp + n, n);

        dp[0] = 0; //bottom - up 

        for (int amo = 1; amo < amount + 1; ++amo) {
            for(const auto& coin: coins) {
                if (amo - coin >= 0) 
                    dp[amo] = min(dp[amo], dp[amo-coin] + 1);
            }
        }
        
        if (dp[amount] != amount + 1) return dp[amount];
        else return -1;
    }
};