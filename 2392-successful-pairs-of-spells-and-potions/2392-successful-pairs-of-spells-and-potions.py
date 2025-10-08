class Solution:
    def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
        
        potions.sort()
        m = len(potions)
        n = len(spells)

        # def check(x):
        #     l, r = 0, m - 1

        #     while l <= r:
        #         md = l + (r-l)//2

        #         if potions[md]*x >= success:
        #             r = md - 1 

        #         else:
        #             l = md + 1
            
        #     return l


        res = [0]*n
        for i in range(n):
            spell = spells[i]
            x = (success + spell - 1) // spell

            idx = bisect_left(potions, x)
            res[i] = m-idx
            
        return res