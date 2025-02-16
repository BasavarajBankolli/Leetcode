class Solution:
    def punishmentNumber(self, n: int) -> int:
        def partition(i, cur, tar, s):
            if i == len(s):
                return cur == tar

            val = 0
            for j in range(i, len(s)):
                val = val*10 + (ord(s[j]) - ord('0'))
                if partition(j+1, cur + val, tar, s):
                    return True

            return False
        
        res = 0
        for i in range(1,n+1):
            if partition(0, 0, i, str(i*i)):
                res += i**2

        return res