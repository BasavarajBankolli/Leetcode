class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        ref = "aeiou"
        
        mx = 0
        cur = 0

        for i in range(k):
            if s[i] in ref:
                cur += 1

        mx = cur

        for i in range(k, len(s)):
            if s[i] in ref:
                cur += 1
            
            if s[i-k] in ref:
                cur -= 1

            mx = max(mx, cur)

        return mx