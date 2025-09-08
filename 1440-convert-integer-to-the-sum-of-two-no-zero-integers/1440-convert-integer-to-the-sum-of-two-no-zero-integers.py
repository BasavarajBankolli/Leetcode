class Solution:
    def getNoZeroIntegers(self, n: int) -> List[int]:
        a = [n-1, 1]

        while str(a[0]).count('0') or str(a[1]).count('0'):
            a[0] -= 1
            a[1] += 1

        
        return a