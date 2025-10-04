class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        # 2, 1, 1
        # 0, 1, 1
        # 1, 0, 1
        
        row, col = len(grid), len(grid[0])
        q = deque()
        
        

        for r in range(row):
            for c in range(col):
                if grid[r][c] == 2:
                    q.append((r,c))
        
        dirs = [(1,0), (-1,0), (0,1), (0,-1)]
        cnt = 0
        while q:
            sz = len(q)
            cnt += 1
            for _ in range(sz):
                r, c = q[0]
                grid[r][c] = 0
                q.popleft()

                for dr, dc in dirs:
                    nr, nc = r+dr, c+dc

                    if 0 <= nr < row and 0 <= nc < col and grid[nr][nc] == 1:
                        q.append((nr, nc))
                        grid[nr][nc] = 0
        
        if sum(sum(r) for r in grid):
            return -1

        cnt -= 1
        return 0 if cnt < 0 else cnt
            

                        



