class Solution:
    def addSpaces(self, s: str, spaces: List[int]) -> str:
        res = []
        i = 0

        for space in spaces:
            res.append(s[i:space] + " ")
            i = space

        res.append(s[i:])

        return "".join(res)