class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        
        mp = {}
        t = tuple()

        for r in grid:
            t = tuple(r)
            mp[t] = mp.get(t, 0) + 1

        grid = zip(*grid) # transpose grid
        
        res = 0
        for row in grid:
            if row in mp:
                res += mp[row]

        return res