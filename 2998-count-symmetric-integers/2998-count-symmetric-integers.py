class Solution:
    def countSymmetricIntegers(self, low: int, high: int) -> int:
        
        cnt = 0
        
        for i in range(low, high + 1):
            ls, rs = 0, 0

            n = str(i)
            if not len(n) % 2:
                for i in range(len(n)):
                    if i < len(n)//2:
                        ls += int(n[i])
                        
                    else:
                        rs += int(n[i])

                if ls == rs:
                    cnt += 1


        return cnt