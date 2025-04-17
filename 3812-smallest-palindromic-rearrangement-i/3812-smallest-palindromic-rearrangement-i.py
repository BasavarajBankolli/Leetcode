from collections import Counter
class Solution:
    def smallestPalindrome(self, s: str) -> str:
        
        n = len(s)
        if (n == 1 or n == 2): return s

        m = n//2
        front = s[:n//2]
        front = sorted(front)
        rev = front.copy()

        rev.reverse()

        res = "".join(front)
        if n % 2:
            res += s[m] 

        return res + "".join(rev)

            

