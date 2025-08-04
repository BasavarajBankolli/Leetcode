class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        lst = slst = -1
        lstcnt = curr = res = 0

        for f in fruits:
            if f == lst or f == slst:
                curr += 1
            else:
                curr = lstcnt + 1

            if f == lst:
                lstcnt += 1
            else:
                lstcnt = 1
                slst, lst = lst, f

            res = max(res, curr)

        return res