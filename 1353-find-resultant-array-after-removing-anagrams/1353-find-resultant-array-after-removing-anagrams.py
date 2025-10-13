class Solution:
    def removeAnagrams(self, words: List[str]) -> List[str]:
        res = []

        for v in words:
            lst = list(v)

            lst.sort()
            tmp = ''.join(lst)

            if not res:
                res.append(v)

            bc = list(res[-1])
            bc.sort()
            back = ''.join(bc)

            if back != tmp:
                res.append(v)

        return res