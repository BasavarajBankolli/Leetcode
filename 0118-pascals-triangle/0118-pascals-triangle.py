class Solution:
    def generate(self, n: int) -> List[List[int]]:
        res = [[1],[1,1]]
        
        if n <= 2:
            return res[:n]

        for i in range(2,n):
            nxt = [1]
            for j in range(1,len(res[-1])):
                nxt.append(res[-1][j] + res[-1][j-1])
            nxt.append(1)
            res.append(nxt)

        return res 