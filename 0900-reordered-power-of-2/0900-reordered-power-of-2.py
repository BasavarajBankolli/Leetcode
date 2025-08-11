class Solution:
    def reorderedPowerOf2(self, n: int) -> bool:
        a = []

        for i in range(30):
            num = 1 << i
            ls = [0]*10

            while num:

                ls[num % 10] += 1
                num //= 10

            a.append(tuple(ls))

        given = [0]*10
        while n:
            given[n%10] += 1
            n //= 10

        return tuple(given) in a
