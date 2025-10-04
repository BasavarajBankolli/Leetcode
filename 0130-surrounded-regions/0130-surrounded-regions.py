class Solution:
    def solve(self, board: List[List[str]]) -> None:
    
        
        rows, cols = len(board), len(board[0])
        st = set()
        
        #  to check 'O' in grid
        def dfs(r, c):
            if r < 0 or r >= rows or c < 0 or c >= cols:
                return 

            st.add((r,c))
            dirs = [(0,1), (0,-1), (1,0), (-1,0)]

            for dr, dc in dirs:
                nr = r + dr
                nc = c + dc
                
                if 0 <= nr < rows and 0 <= nc < cols and board[nr][nc] == 'O' and (nr, nc) not in st:
                    dfs(nr, nc)

        for r in range(rows):
            for c in range(cols):
                if board[r][c] == 'O' and (r,c) not in st:
                    
                    if r == 0 or r == rows-1 or c == 0 or c == cols - 1:
                        dfs(r,c)

        for r in range(rows):
            for c in range(cols):
                if board[r][c] == 'O' and (r,c) not in st:
                    board[r][c] = 'X'


        
        