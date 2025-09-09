class Solution:
    def minOperations(self, nums: List[int]) -> int:
        
        for i in range(1,len(nums)):
            if nums[i] != nums[i-1]:
                return 1

        return 0