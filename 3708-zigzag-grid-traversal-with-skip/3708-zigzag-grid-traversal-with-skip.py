class Solution:
    def zigzagTraversal(self, grid: List[List[int]]) -> List[int]:
        res = []
        
        for i, r in enumerate(grid):
            res += r[::-1] if i % 2 else r

        return res[::2]