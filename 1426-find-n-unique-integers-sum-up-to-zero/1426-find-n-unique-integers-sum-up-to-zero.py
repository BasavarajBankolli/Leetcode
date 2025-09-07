class Solution:
    def sumZero(self, n: int) -> List[int]:
        
        res = []
        for i in range(1,n//2 + 1):
            res.extend([-i,i])

        
        if n & 1:
            res.append(0)

        return res