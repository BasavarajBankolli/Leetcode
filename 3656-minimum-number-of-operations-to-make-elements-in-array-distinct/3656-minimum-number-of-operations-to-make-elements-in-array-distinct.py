class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        s = set()

        for i in range(len(nums) - 1, -2, -1):
            if nums[i] in s:
                break

            s.add(nums[i])

        return math.ceil((i+1)/3)

        