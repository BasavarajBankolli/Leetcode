class Solution:
    def maximumTripletValue(self, nums: List[int]) -> int:
        
        pre, suf = [0] * len(nums), [0] * len(nums)
        pre[0] = nums[0] 
        suf[-1] = nums[-1]

        for i in range(1,len(nums)):
            pre[i] = max(nums[i], pre[i-1])

            suf[-i-1] = max(suf[-i], nums[-i-1])
        
        print(suf,pre)

        res = 0
        for i in range(1, len(nums)-1):
            res = max(res, (pre[i - 1] - nums[i]) * suf[i + 1])

        return res