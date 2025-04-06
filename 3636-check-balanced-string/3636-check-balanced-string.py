class Solution:
    def isBalanced(self, num: str) -> bool:
        ev, od = 0, 0

        for i in range(len(num)):
            if i % 2:
                ev += int(num[i])

            else:
                od += int(num[i])

        return od == ev
