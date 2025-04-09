class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        s = set()

        for a in nums:
            if a < k:
                return -1

            elif a > k:
                s.add(a)

        return len(s)