class Solution:
    def minOperations(self, s: str) -> int:
    
        a = [0]*26

        for c in s:
            a[ord(c) - ord('a')] = 1

        mn = 0
        for i in range(1,26):
            if a[i]:
                mn = i
                break

            
        res = 0
        if mn != 0:
            res = 26 - i

        return res




        