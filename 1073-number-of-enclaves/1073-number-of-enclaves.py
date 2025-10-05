class Solution:
    def numEnclaves(self, grid: List[List[int]]) -> int:
        rows, cols = len(grid), len(grid[0])

        cnt = 0
        dirs = [(1,0), (-1,0), (0,1), (0,-1)]
        
        def dfs(r,c):
            if r < 0 or r >= rows or c < 0 or c >= cols:
                return 

            if grid[r][c] == 1:
                grid[r][c] = 0
               

            for dr, dc in dirs:
                nr, nc = r + dr, c + dc

                if 0 <= nr < rows and 0 <= nc < cols and grid[nr][nc] == 1:
                    dfs(nr, nc)
        
        for r in range(rows):
            if grid[r][0] == 1:
                dfs(r, 0)
            if grid[r][cols-1] == 1:
                dfs(r, cols-1)

        for c in range(cols):
            if grid[0][c] == 1:
                dfs(0, c)
            if grid[rows-1][c] == 1:
                dfs(rows-1, c)

        som = sum(sum(r) for r in grid)

        # print(vis)
        return som 
                
        
