class Solution:
    def minCost(self, basket1: List[int], basket2: List[int]) -> int:
        cnt = Counter(basket1)
        
        mn = float('inf')

        for b in basket2:
            cnt[b] -= 1
            
        mn = min(basket1)
        mn = min(mn, min(basket2))
        a = []
        for k, v in cnt.items():
            if v % 2 == 1:
                return -1

            a.extend([k]*(abs(v)//2))

        if len(a) == 0:
            return 0

        res = 0
        a.sort()
        for x in a[:len(a)//2]:
            res += min(x, 2*mn)
        

        return res