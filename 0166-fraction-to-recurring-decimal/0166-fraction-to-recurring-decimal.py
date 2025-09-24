class Solution:
    def fractionToDecimal(self, n: int, d: int) -> str:
        if n == 0:
            return "0"
        res = []
        if (n < 0) ^ (d < 0):
            res.append("-")
        n, d = abs(n), abs(d)
        res.append(str(n // d))
        rem = n % d
        if rem == 0:
            return "".join(res)
        res.append(".")
        rem_pos = {}
        while rem != 0:
            if rem in rem_pos:
                idx = rem_pos[rem]
                res.insert(idx, "(")
                res.append(")")
                break
            rem_pos[rem] = len(res)
            rem *= 10
            res.append(str(rem // d))
            rem %= d
        return "".join(res)
