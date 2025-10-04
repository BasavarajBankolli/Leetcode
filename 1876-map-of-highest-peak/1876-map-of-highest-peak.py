class Solution:
    def highestPeak(self, wat: List[List[int]]) -> List[List[int]]:
        m, n = len(wat), len(wat[0])

        mat = [[-1]*n for _ in range(m)]
        dirs = [[0,1], [0,-1], [1, 0], [-1, 0]]

        q = deque()
        for r in range(m):
            for c in range(n):
                if wat[r][c] == 1:
                    mat[r][c] = 0
                    q.append((r,c))

        while q:
            r,c = q[0]
            q.popleft()

            for dr, dc in dirs:
                nr, nc = r + dr, c + dc

                if 0 <= nr < m and 0 <= nc < n and mat[nr][nc] == -1:
                    mat[nr][nc] = mat[r][c] + 1
                    q.append((nr, nc))

        return mat
                        
                    
                    

        

        



