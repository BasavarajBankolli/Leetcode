class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        cnt = 0
        res = 0
        
        for v in nums:
            if v == 0:
                cnt += 1

            else:
                res += (cnt*(cnt + 1))//2
                cnt = 0

        res += (cnt*(cnt+1)) // 2

        return res