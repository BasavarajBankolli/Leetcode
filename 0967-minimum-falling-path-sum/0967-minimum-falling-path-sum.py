class Solution:
    def minFallingPathSum(self, mat: List[List[int]]) -> int:
        n = len(mat)
        dp = mat[0]

        for r in range(1,n):
            cur = [0]*n

            for c in range(n):

                if c == 0:
                    cur[c] = min(dp[c] + mat[r][c], dp[c+1] + mat[r][c])

                elif c == n-1:
                    cur[c] = min(dp[c] + mat[r][c], dp[c-1] + mat[r][c])

                else:
                    cur[c] = min(dp[c] + mat[r][c], dp[c+1] + mat[r][c], dp[c-1] + mat[r][c])

                
            dp = cur

        return min(dp)


