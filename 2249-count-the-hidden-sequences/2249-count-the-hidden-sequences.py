class Solution:
    def numberOfArrays(self, d: List[int], lower: int, upper: int) -> int:
        n = len(d)
        n += 1
        prev = 1
        mn, mx = 1, 1

        for i in range(1,n):
            prev = (prev + d[i-1])
            mn = min(mn, prev)
            mx = max(mx, prev)

        diff = -(mn-lower)
        high = mx + diff
        res = upper - high + 1

        if res < 0:
            return 0

        return res 