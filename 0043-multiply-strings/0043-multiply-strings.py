class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        if num1 == '0' or num2 == '0':
            return '0'

        num1 = num1[::-1]
        num2 = num2[::-1]

        res = [0] * (len(num1) + len(num2))

        for i in range(len(num1)):
            n1 = int(num1[i])
            for j in range(len(num2)):
                n2 = int(num2[j])
                zeros = i + j

                carry = res[zeros] 
                multi = n1*n2 + carry

                res[zeros] = multi % 10

                res[zeros+1] += multi // 10

        if res[-1] == 0:
            res.pop()

        res.reverse()

        return ''.join(map(str, res))
