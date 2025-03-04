class Solution:
    def reverseWords(self, s: str) -> str:
        r = s.split()
    
        res = ""
        for w in reversed(r):
            res += w + " "

        return res.rstrip()