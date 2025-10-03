import heapq
from typing import List

class Solution:
    def trapRainWater(self, hmap: List[List[int]]) -> int:
        m, n = len(hmap), len(hmap[0])
        mnheap = []
        vis = [[0] * n for _ in range(m)]

        for i in range(m):
            for j in range(n):
                if i == 0 or i == m-1 or j == 0 or j == n-1:
                    heapq.heappush(mnheap, (hmap[i][j], i, j))
                    vis[i][j] = 1

        dirs = [(0,1), (0,-1), (1,0), (-1,0)]
        res = 0

        while mnheap:
            h, x, y = heapq.heappop(mnheap)
            for dx, dy in dirs:
                nx, ny = x + dx, y + dy
                if 0 <= nx < m and 0 <= ny < n and not vis[nx][ny]:
                    res += max(0, h - hmap[nx][ny])
                    heapq.heappush(mnheap, (max(hmap[nx][ny], h), nx, ny))
                    vis[nx][ny] = 1
        return res
