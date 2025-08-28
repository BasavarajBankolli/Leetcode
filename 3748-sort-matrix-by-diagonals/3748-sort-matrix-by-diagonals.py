class Solution:
    def sortMatrix(self, grid: List[List[int]]) -> List[List[int]]:
        d = defaultdict(list)
        n = len(grid)
        for i in range(n):
            for j in range(n):  
                d[j-i].append(grid[i][j])


        for k, v in d.items():
            v.sort()

            if k > 0:
                v.reverse()


        for i in range(n):
            for j in range(n):
                grid[i][j] = d[j-i][-1]
                d[j-i].pop()

        return grid
            
 