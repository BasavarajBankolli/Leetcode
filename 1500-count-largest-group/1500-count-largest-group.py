class Solution:
    def digitsum(self,n):
        if n < 10:
            return n
        res = 0
        while n:
            res += n % 10
            n //= 10
        return res

    def countLargestGroup(self, n: int) -> int:
        d = defaultdict(int)
        
        for v in range(1,n+1):
            som = self.digitsum(v)
            d[som] += 1
        
        mx = max(d.values())
        resCnt = 0
        for v in d.values():
            if v == mx:
                resCnt += 1

        return resCnt