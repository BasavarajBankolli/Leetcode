class Solution:
    def countGoodNumbers(self, n: int) -> int:
        
        if n == 1: return 5
        elif n == 2: return 20

        even = n // 2
        odd = n - even
        mod = 10**9 + 7

        return (pow(5, odd, mod) * pow(4, even, mod)) % mod

            

        