class Solution:
    def isBalanced(self, num: str) -> bool:
        tot = 0

        for i in range(len(num)):
            if i % 2:
                tot += int(num[i])

            else:
                tot -= int(num[i])

        return tot == 0
