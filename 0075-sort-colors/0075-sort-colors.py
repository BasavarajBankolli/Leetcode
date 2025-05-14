class Solution:
    def sortColors(self, a: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        l, m, r = 0, 0, len(a)-1

        while m <= r:
            if a[m] == 0:
                a[l], a[m] = a[m], a[l]
                l += 1
                m += 1
            elif a[m] == 1:
                m += 1

            else:
                a[m], a[r] = a[r], a[m]
                r -= 1
        