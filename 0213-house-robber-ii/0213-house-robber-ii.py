class Solution:
    def rob(self, nums: List[int]) -> int:
        
        def help(arr):
            rob1, rob2 = 0, 0

            for v in arr:
                tmp = max(v + rob1, rob2)
                rob1 = rob2
                rob2 = tmp

            return rob2


        return max(nums[0], help(nums[1:]), help(nums[:-1]))

        
            
        