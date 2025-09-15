class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        lst = text.split()
        st = set(brokenLetters)

        res = len(lst)
        for w in lst:
            for c in w:
                if c in st:
                    res -= 1
                    break

        return res