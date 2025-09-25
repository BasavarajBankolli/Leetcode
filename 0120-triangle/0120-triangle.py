class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        row = len(triangle)

        dp = [[0] * (i+1) for i in range(row)]
        for r in range(row):
            for c in range(r+1):
                
                if r == 0 and c == 0:
                    dp[r][c] = triangle[r][c]
                    continue

                if c == 0:
                    dp[r][c] = dp[r-1][c] + triangle[r][c]

                elif c == r: 
                    dp[r][c] = dp[r-1][c-1] + triangle[r][c]

                else:
                    dp[r][c] = min(dp[r-1][c-1] + triangle[r][c], dp[r-1][c] + triangle[r][c])

        mn = float('inf')      
        for v in dp[-1]:
            mn = min(mn, v)

        return mn