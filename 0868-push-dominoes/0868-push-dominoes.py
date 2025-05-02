class Solution:
    def pushDominoes(self, dominoes: str) -> str:
        lst = list(dominoes)
        n = len(lst)
        dp = [0] * n

        force = 0
        for i in range(n):
            if lst[i] == 'R':
                force = n  
            elif lst[i] == 'L':
                force = 0
            else:
                if force > 0:
                    force -= 1
            dp[i] += force

        force = 0
        for i in range(n - 1, -1, -1):
            if lst[i] == 'L':
                force = n  
            elif lst[i] == 'R':
                force = 0
            else:
                if force > 0:
                    force -= 1
            dp[i] -= force

        for i in range(n):
            if dp[i] > 0:
                lst[i] = 'R'
            elif dp[i] < 0:
                lst[i] = 'L'
            else:
                lst[i] = '.'

        return ''.join(lst)