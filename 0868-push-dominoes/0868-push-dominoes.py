class Solution:
    def pushDominoes(self, d: str) -> str:
        lst = list(d)
        lst_l = -1
        lst_r = -1

        def bothside(l, r):
            while l < r:
                lst[l] = "R"
                lst[r] = "L"
                l += 1
                r -= 1

        def leftL(l, r):
            while r > l:
                lst[r] = "L"
                r -= 1

        def rightR(l, r):
            while l < r:
                lst[l] = "R"
                l += 1

        for i in range(len(lst)):
            if lst[i] == 'L':
                if lst_r > lst_l:
                    bothside(lst_r + 1, i - 1)
                else:
                    leftL(lst_l, i - 1)
                lst_l = i

            elif lst[i] == 'R':
                if lst_r > lst_l:
                    rightR(lst_r + 1, i)
                lst_r = i

        if lst_r > lst_l:
            rightR(lst_r + 1, len(lst))

        return ''.join(lst)