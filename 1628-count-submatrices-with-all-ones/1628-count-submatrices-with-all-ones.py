class Solution:
    def numSubmat(self, mat: List[List[int]]) -> int:
        rows = len(mat)
        cols = len(mat[0])
        
        width = [[0]*cols for _ in range(rows)]
        
        res = 0
        for r in range(rows):
            for c in range(cols):
                if mat[r][c] == 1:
                    if c == 0:
                        width[r][c] = 1
                    else:
                        width[r][c] = width[r][c-1] + 1

                    min_width = width[r][c]
                    for k in range(r, -1, -1):  # go upwards
                        if width[k][c] == 0:
                            break
                        min_width = min(min_width, width[k][c])
                        res += min_width

        return res
