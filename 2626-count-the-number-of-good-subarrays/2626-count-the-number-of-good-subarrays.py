from collections import defaultdict
class Solution:
    def countGood(self, nums: List[int], k: int) -> int:
        
        d = defaultdict(int)
        pair = left = res = 0

        for right in range(len(nums)):
            pair += d[nums[right]]
            d[nums[right]] += 1

            while pair >= k:
                res += len(nums) - right
                d[nums[left]] -= 1
                pair -= d[nums[left]]
                left += 1

        return res
