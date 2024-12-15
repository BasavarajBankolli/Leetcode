class Solution:
    def countBits(self, n: int) -> List[int]:
        res = [0]

        for v in range(1, n + 1):
            b = bin(v)
            res.append(b.count('1'))

        return res