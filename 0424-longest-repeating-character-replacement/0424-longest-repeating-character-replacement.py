class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
                 
        j = 0
        mx = 0
        a = [0] * 26

        for i in range(len(s)):
            a[ord(s[i]) - ord('A')] += 1

            while (i - j + 1) - max(a) > k:
                a[ord(s[j]) - ord('A')] -= 1
                j += 1

            mx = max(mx, i - j + 1)

        return mx   
