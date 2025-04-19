class Solution:
    def countAndSay(self, n: int) -> str:
        # 21 1211 111221 312211 13112221 ->  this is pattern
        if n < 3: return '1' * n

        ls = [1, 1]
        for i in range(2,n):
            tmp = []
            cnt = 1
            right = 0
            ok = 0
            while right < len(ls) - 1:
                if ls[right] == ls[right + 1]:
                    ok = 0
                    cnt += 1
                else:
                    tmp.append(cnt)
                    tmp.append(ls[right])
                    cnt = 1
                    ok = 1

                right += 1

            if not ok:
                tmp.append(cnt)
                tmp.append(ls[right])

            if ls[-1] != ls[-2]:
                tmp.append(1)
                tmp.append(ls[-1])

            ls = tmp

        ls = [str(v) for v in ls]
        return "".join(ls)  