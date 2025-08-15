class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        res = 1
        
        while res < n:
            res *= 4

        return res == n