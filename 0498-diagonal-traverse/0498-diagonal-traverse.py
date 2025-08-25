class Solution:
    def findDiagonalOrder(self, mat: List[List[int]]) -> List[int]:
        d = defaultdict(list)

        rows, cols = len(mat), len(mat[0])

        for i in range(rows):
            for j in range(cols):
                d[i+j].append(mat[i][j])

        res = []
        for k,v in d.items():
            if k & 1 == 0:
                v.reverse()

            for num in v:
                res.append(num)

        return res


