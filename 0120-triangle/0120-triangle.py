class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        row = len(triangle)

        dp = [0]*row
        for r in range(row):
            cur = [0]*row
            for c in range(r+1):
                if r == 0 and c == 0:
                    cur[0] = triangle[0][0]
                    continue

                if c == 0:
                    cur[c] = dp[c] + triangle[r][c]

                elif c == r: 
                    cur[c] = dp[c-1] + triangle[r][c]

                else:
                    cur[c] = min(dp[c-1] + triangle[r][c], dp[c] + triangle[r][c])
            
            dp = cur
            print(dp)

        return min(dp)