class Solution:
    def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
        
        potions.sort()
        m = len(potions)
        n = len(spells)

        def check(x):
            l, r = 0, m - 1

            while l <= r:
                md = l + (r-l)//2

                if potions[md]*x >= success:
                    r = md - 1 

                else:
                    l = md + 1
            
            return l

        # d = {}
        res = [0]*n
        for i in range(n):
            # if spells[i] in d:
            #     res[i] = d[spells[i]]
            #     continue

            res[i] = m - check(spells[i])
            # d[spells[i]] = res[i]
            
        return res