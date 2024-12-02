class Solution:
    def isPrefixOfWord(self, s: str,sw: str) -> int:
        words = s.split()
        n = len(words)
        m = len(sw)

        for i in range(n):

            if len(words[i]) >= m and words[i][0:m] == sw:
                return i + 1

        return -1