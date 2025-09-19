class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        
        def rec(s, ans, freq):
            if len(s) == len(nums):
                ans.append(s[:])
                return

            for i in range(len(nums)):
                if not freq[i]:
                    freq[i] = 1
                    s.append(nums[i])
                    rec(s, ans, freq)
                    s.pop()
                    freq[i] = 0

        ans = []
        rec([], ans, [0]*(len(nums)))
        return ans