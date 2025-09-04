class Solution:
    def findClosest(self, x: int, y: int, z: int) -> int:
        d1 = abs(z-x)
        d2 = abs(z-y)

        if d1 == d2:
            return 0

        return 1 if d1 < d2 else 2