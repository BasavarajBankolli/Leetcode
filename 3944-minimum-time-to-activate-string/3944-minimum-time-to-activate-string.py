class Solution:
    def minTime(self, s: str, order: List[int], k: int) -> int:
        n = len(s)
        def check(mid):
            tot = (n*(n+1)) // 2

            cur = 0
            prev = -1
            strs = order[:mid+1]
            strs.sort()

            for v in strs:
                idx = v - prev - 1
                cur += (idx *(idx + 1)) //2
                prev = v
            
            idx = n - prev - 1
            cur += (idx*(idx + 1)) // 2

            tot -= cur

            return tot >= k

        
        l, r = 0, n - 1
        ans = -1
        while l <= r:
            m = l + (r-l)//2
            if check(m):
                ans = m
                r = m - 1

            else:
                l = m + 1
        
        return ans 

            
