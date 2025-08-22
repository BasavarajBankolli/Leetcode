class Solution:
    def minimumArea(self, grid: List[List[int]]) -> int:
        left, right = len(grid[0]), -1
        top, bottom = len(grid), -1

        for r in range(len(grid)):
            for c in range(len(grid[0])):

                if grid[r][c] == 1:
                    left = min(left, c)
                    right = max(right, c)

                    top = min(top, r)
                    bottom = max(bottom, r)

        bottom = bottom - top + 1
        right = right - left + 1

        return bottom * right 
                    
                    
                    