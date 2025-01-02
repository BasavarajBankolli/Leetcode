class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        res = [101] * 26

        for w in words:
            ref = [0] * 26
            for c in w:
                ref[ord(c) - ord('a')] += 1

            for i in range(26):
                res[i] = min(ref[i], res[i])

        ans = []

        for i in range(26):
            ans += [chr(ord('a') + i)] * res[i]

        return ans

            
            