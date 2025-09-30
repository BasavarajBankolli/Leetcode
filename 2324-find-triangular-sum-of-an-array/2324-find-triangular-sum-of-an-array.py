class Solution:
    def triangularSum(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 1:
            return nums[0]

        tmp = [0]*(n)

        while n > 1:
            for i in range(n-1):
                tmp[i] = (nums[i] + nums[i+1]) % 10

            n -= 1
            nums = tmp

        return tmp[0]