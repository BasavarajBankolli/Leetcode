class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n < 0:
            return False

        i = 1
        while i < n:
            i *= 3

        return i == n