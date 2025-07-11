class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        set1 = set()
        
        while n not in set1:
            set1.add(n)
            n = sum([int(x)**2 for x in str(n)])

        return n == 1