class Solution:
    def smallestNumber(self, num: int) -> int:
        res = sorted(str(num))
        print(res)
        if num >= 0:
            if res[0] == '0':
                for i in range(1, len(res)):
                    if res[i] != '0':
                        res[i], res[0] = res[0], res[i]
                        break
            return int("".join(res))

        else:
            res = res[::-1][:len(res)-1]
            return -int("".join(res))
