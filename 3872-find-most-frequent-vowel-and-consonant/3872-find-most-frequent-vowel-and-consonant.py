class Solution:
    def maxFreqSum(self, s: str) -> int:
        cnt = Counter(s)
        s = 'aeiou'

        vowel = 0
        cons = 0

        for k, v in cnt.items():
            if k in s:
                vowel = max(vowel, v)

            else:
                cons = max(cons, v)

        return vowel + cons