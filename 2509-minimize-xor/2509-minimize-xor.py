class Solution:
    def minimizeXor(self, n1: int, n2: int) -> int:
        cnt = 0

        while n2:
            n2 &= n2 - 1
            cnt += 1


        res = 0

        for i in range(31,-1,-1):
            if cnt and n1 & (1 << i):
                cnt -= 1
                res += 1<<i

        for i in range(0,32):
            if cnt and n1 & (1 << i) == 0:
                cnt -= 1
                res += 1<<i

        return res