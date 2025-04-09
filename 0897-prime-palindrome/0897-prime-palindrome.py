class Solution:
    @staticmethod
    def prime(n):
            if n < 2:
                return False

            for i in range(2, int(n**0.5) + 1):

                if not n % i:
                    return False

            return True

    def primePalindrome(self, n: int) -> int:

        while True:

            s = str(n)

            if s == s[::-1] and Solution.prime(n):
                return n

            n += 1

            if 10**7 < n < 10**8:
                n = 10 ** 8