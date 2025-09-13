class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
                 
        j = 0
        mx = 0
        a = [0] * 26

        res = 0
        for i in range(len(s)):
            a[ord(s[i]) - ord('A')] += 1

            mx = max(mx, a[ord(s[i]) - ord('A')])
            if (i - j + 1) - mx > k:
                a[ord(s[j]) - ord('A')] -= 1
                j += 1

            res = max(res, i - j + 1)

        return res   
