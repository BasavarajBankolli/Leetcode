class Solution:
    def pacificAtlantic(self, hs: List[List[int]]) -> List[List[int]]:
        rows, cols = len(hs), len(hs[0])

        dirs = [(1,0), (-1,0), (0,1), (0,-1)]
        def bfs(points):

            q = deque(points)
            vis = set(points)
            
            while q:
                r, c = q[0]
                q.popleft()

                for dr, dc in dirs:
                    nr, nc = dr + r, dc + c

                    if 0 <= nr < rows and 0 <= nc < cols and (nr, nc) not in vis and hs[nr][nc] >= hs[r][c]:
                        q.append((nr,nc))
                        vis.add((nr, nc))

            return vis

        pacific = []
        atlatic = []
        for r in range(rows):
            pacific.append((r,0))
            atlatic.append((r,cols-1))

        for c in range(cols):
            atlatic.append((rows-1, c))
            pacific.append((0, c))

        res = list(bfs(pacific) & bfs(atlatic))

        return res

            

                
            
        
