class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        res = [0] * 26

        for c in words[0]:
            res[ord(c) - ord('a')] += 1

        for w in words[1:]:
            ref = [0] * 26
            for c in w:
                ref[ord(c) - ord('a')] += 1

            for i in range(26):
                res[i] = min(ref[i], res[i])

        ans = []

        for i in range(26):
            ans += [chr(ord('a') + i)] * res[i]

        return ans

            
            