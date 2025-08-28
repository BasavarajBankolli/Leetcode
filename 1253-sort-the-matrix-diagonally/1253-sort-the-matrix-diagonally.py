class Solution:
    def diagonalSort(self, mat: List[List[int]]) -> List[List[int]]:
        d = defaultdict(list)
        rows, cols = len(mat), len(mat[0])

        for i in range(rows):
            for j in range(cols):  
                d[j-i].append(mat[i][j])


        for k, v in d.items():
            v.sort(reverse = True)

            


        for i in range(rows):
            for j in range(cols):
                mat[i][j] = d[j-i][-1]
                d[j-i].pop()

        return mat
            
 