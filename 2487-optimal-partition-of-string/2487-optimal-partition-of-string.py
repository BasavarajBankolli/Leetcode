class Solution:
    def partitionString(self, s: str) -> int:
        freq = [0]*26

        cnt = 0
        for i in range(len(s)):
            if freq[ord(s[i]) - ord('a')]:
                cnt += 1
                freq = [0] * 26

            freq[ord(s[i]) - ord('a')] = 1

        if freq.count(1):
            return cnt + 1

        return cnt