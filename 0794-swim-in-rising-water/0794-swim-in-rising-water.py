import heapq
class Solution:
    def swimInWater(self, grid: List[List[int]]) -> int:
        n = len(grid)

        vis = [[0]*n for _ in range(n)]
        mnheap = [(grid[0][0],0 ,0)]
        vis[0][0] = 1

        dirs = [(0,1), (0,-1), (1,0), (-1,0)]

        while mnheap:
            t, r, c = mnheap[0]
            heapq.heappop(mnheap)

            if r == n - 1 and c == n - 2 or r == n - 2 and c == n - 1:
                return max(t, grid[-1][-1])

            for dr, dc in dirs:
                nr, nc = dr + r, dc + c

                if 0 <= nr < n and 0 <= nc < n and vis[nr][nc] == 0:
                    vis[nr][nc] = 1
                    heapq.heappush(mnheap, (max(t, grid[nr][nc]), nr,nc))
            
        return 0