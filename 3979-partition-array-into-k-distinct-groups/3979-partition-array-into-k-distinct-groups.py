class Solution:
    def partitionArray(self, nums: List[int], k: int) -> bool:
        cnt = Counter(nums)
        grp = len(nums) // k

        if len(nums) % k != 0:
            return False


        for key, v in cnt.items():
            if v > grp:
                return False

        return True