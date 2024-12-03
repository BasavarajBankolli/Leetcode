class Solution:
    def addSpaces(self, s: str, spaces: List[int]) -> str:
        res = ""
        i = 0

        for space in spaces:
            res += s[i:space] + " "
            i = space

        res += s[i:]
        return res