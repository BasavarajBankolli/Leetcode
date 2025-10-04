class Solution:
    def solve(self, board: List[List[str]]) -> None:
        '''
        
        rows, cols = len(board), len(board[0])
        vis = [[0]*cols for _ in range(rows)]
        
        #  to check 'O' in grid
        def dfs(r, c):
            if r < 0 or r >= rows or c < 0 or c >= cols:
                return False

            vis[r][c] = 1
            dirs = [(0,1), (0,-1), (1,0), (-1,0)]
            
            for dr, dc in dirs:
                nr = r + dr
                nc = c + dc
                
                if 0 <= nr < rows and 0 <= nc < cols:
                    if board[nr][nc] == 'O' and not vis[nr][nc]:
                        dfs(nr,nc)

            return True
                    
        #  to fill 'X' to grid 
        def fill(r,c):
            board[r][c] = 'X'
            dirs = [(0,1), (0,-1), (1,0), (-1,0)]

            for nr, nc in dirs:
                if board[nr][nc] == 'O':
                    fill(nr,nc)

        for r in range(rows):
            for c in range(cols):
                if board[r][c] == 'O' and not vis[r][c]:
                    flag = dfs(r,c)

                    if flag:
                        fill(r,c)

        return board
        '''
        rows, cols = len(board), len(board[0])
        vis = [[0]*cols for _ in range(rows)]
        
        # to check 'O' in grid
        def dfs(r, c):
            if r < 0 or r >= rows or c < 0 or c >= cols:
                return False
            if board[r][c] != 'O' or vis[r][c]:
                return True

            vis[r][c] = 1
            dirs = [(0,1), (0,-1), (1,0), (-1,0)]

            check = True
            if r == 0 or r == rows-1 or c == 0 or c == cols-1:
                check = False  

            for dr, dc in dirs:
                nr, nc = r + dr, c + dc
                if 0 <= nr < rows and 0 <= nc < cols:
                    if board[nr][nc] == 'O' and not vis[nr][nc]:
                        if not dfs(nr, nc):
                            check = False
            return check
                    
        # to fill 'X' in grid 
        def fill(r, c):
            board[r][c] = 'X'
            dirs = [(0,1), (0,-1), (1,0), (-1,0)]
            for dr, dc in dirs:
                nr, nc = r + dr, c + dc
                if board[nr][nc] == 'O':
                    fill(nr, nc)

        for r in range(rows):
            for c in range(cols):
                if board[r][c] == 'O' and not vis[r][c]:
                    flag = dfs(r, c)
                    if flag:
                        fill(r, c)
