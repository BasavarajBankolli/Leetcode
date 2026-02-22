class Solution:
    def almostPalindromic(self, s: str) -> int:

        ans = 0
        def check(l, r):
            nonlocal ans
            while l >= 0 and r < len(s) and s[l] == s[r]:
                l -= 1
                r += 1
                
            ans = max(ans, r - l - 1)

        def pal(l:int, r:int) -> None:
            nonlocal ans
            while l >= 0 and r < len(s) and s[l] == s[r]:
                l -= 1
                r += 1
                
            ans = max(ans, r - l - 1)
            check(l, r+1)
            check(l-1, r)
        
        for i in range(len(s)):
            pal(i,i)
            pal(i,i+1)

        return ans if len(s) > ans else len(s)
            
            
