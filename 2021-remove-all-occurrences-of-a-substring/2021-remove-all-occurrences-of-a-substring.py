class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        res = []
        pn = len(part)

        for c in s:
            res.append(c)

            while len(res) >= pn and ''.join(res[-pn:]) == part:
                del res[-pn:]

        return "".join(res)