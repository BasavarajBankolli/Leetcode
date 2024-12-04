class Solution:
    def canMakeSubsequence(self, str1: str, str2: str) -> bool:
        i = 0

        for c in str1:
            if i < len(str2) and (ord(str2[i]) - ord(c) + 26) % 26 <= 1:
                i += 1

        return i == len(str2)