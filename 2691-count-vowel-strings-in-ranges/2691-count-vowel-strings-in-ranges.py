class Solution:
    def vowelStrings(self, w: List[str], q: List[List[int]]) -> List[int]:
        n = len(w)
        pre = [0] * (n + 1)          # [0, 1, 1, 2, 3, 4]
        s = "aeiou"

        v = 0

        for i in range(n):
            v = 0
            
            if w[i][0] in s and w[i][-1] in s:
                v = 1

            pre[i + 1] = pre[i] + v

        res = []
        for l,r in q:
            res.append(pre[r+1] - pre[l])

        return res