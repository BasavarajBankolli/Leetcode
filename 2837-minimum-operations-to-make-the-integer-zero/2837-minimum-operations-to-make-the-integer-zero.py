class Solution:
    def makeTheIntegerZero(self, num1: int, num2: int) -> int:
        # num11 = num1 - (2^1 + num2)
        # num12 = num1 - (2^1 + num2) - (2^2 + num2)
        
        # num1t = num1 - (2^1 + 2^2 + 2^3 + _ _ _ 2^t) - (t*num2)
        # 0 = num1 - (2^1 + 2^2 + 2^3 + _ _ _ 2^t) - (t*num2)
        # num1 - (t*num2) = express this in 2 powers with a t 

        for t in range(1,33):
            cal = num1 - (t*num2)
            if cal < 0:
                return -1 

            
            if cal.bit_count() <= t <= cal:
                return t

        return -1
            
