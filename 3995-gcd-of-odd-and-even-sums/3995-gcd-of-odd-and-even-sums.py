class Solution:
    def gcdOfOddEvenSums(self, n: int) -> int:
        odd = 0
        even = 0

        for i in range(1, n*2 + 1):
            odd += i
            even += i + 1

        return math.gcd(odd,even)