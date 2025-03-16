class Solution:
    def smallestNumber(self, num: int) -> int:
        if num == 0:
            return 0

        res = []
        n = num

        if num < 0:
            n *= -1

        while n > 0:
            res.append(str(n % 10))
            n //= 10

        res.sort()
        if num < 0:
            res = res[::-1]
            return -1*int("".join(res))


        if res[0] == '0':
            for i in range(1,len(res)):
                if res[i] != '0':
                    res[i], res[0] = res[0], res[i]
                    break
        return int("".join(res))

            
            

        