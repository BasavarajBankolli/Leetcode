class Solution:
    def productQueries(self, n: int, queries: List[List[int]]) -> List[int]:
        mod = 10**9 + 7
        
        pow2 = []
        bit = 0
        temp = n
        while temp > 0:
            if temp & 1:
                pow2.append(1 << bit)
            bit += 1
            temp >>= 1
        
        pre = [1]
        for p in pow2:
            pre.append(pre[-1] * p)  
        
        ans = []
        for l, r in queries:
            product = (pre[r+1] // pre[l]) % mod
            ans.append(product)
        
        return ans
