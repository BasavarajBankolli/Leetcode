class Solution:
    def peopleAwareOfSecret(self, n: int, delay: int, forget: int) -> int:
        MOD = 10**9 + 7

        dp = [0] * (n + 1)
        dp[1] = 1
        cur = 0  

        for d in range(2, n + 1):
            if d - delay >= 1:
                cur = (cur + dp[d - delay]) % MOD
            if d - forget >= 1:
                cur = (cur - dp[d - forget]) % MOD

            dp[d] = cur % MOD

        start = max(1, n - forget + 1)
        return sum(dp[start:n+1]) % MOD
