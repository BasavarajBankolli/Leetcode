class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        res = set()

        for first in words:
            for sec in words:
                if len(sec) < len(first):
                    if first.find(sec) != -1:
                        res.add(sec)

        return list(res)