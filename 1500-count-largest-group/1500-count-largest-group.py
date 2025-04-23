class Solution:
    def digitsum(self,n):
        res = 0
        while n:
            res += n % 10
            n //= 10
        return res

    def countLargestGroup(self, n: int) -> int:
        d = defaultdict(list)
        
        mx = 0
        for v in range(1,n+1):
            som = self.digitsum(v)
            d[som].append(v)
            mx = max(len(d[som]), mx)

        resCnt = 0
        for arr in d.values():
            if len(arr) == mx:
                resCnt += 1

        return resCnt