class Solution:
    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
        rows, cols = len(mat), len(mat[0])

        res = [[-1]*cols for _ in range(rows)]

        q = deque()
        for r in range(rows):
            for c in range(cols):
                if mat[r][c] == 0:
                    res[r][c] = 0
                    q.append((r,c))
                    
        dirs = [(0,1), (0, -1), (1, 0), (-1, 0)]
        while q:
            r, c = q[0]
            q.popleft()

            for dr, dc in dirs: 
                nr, nc = dr + r, dc + c

                if 0 <= nr < rows and 0 <= nc < cols and res[nr][nc] == -1:
                    res[nr][nc] = res[r][c] + 1
                    q.append((nr, nc))
        
        return res