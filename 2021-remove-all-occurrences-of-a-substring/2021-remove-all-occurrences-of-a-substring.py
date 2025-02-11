class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        res = []
        part = list(part)
        pn = len(part)

        for c in s:
            res.append(c)
            
            while len(res) >= pn and res[len(res) - pn:] == part:
                for i in range(pn):
                    res.pop()

        return "".join(res)