class Solution:
    def findDifferentBinaryString(self, nums: List[str]) -> str:
        st = set(nums)
        self.res = ""

        def backtrack(n, cur, s):
            if len(cur) == n:
                if cur not in s:
                    self.res = cur
                    return True
                return False

            for c in '01':
                if backtrack(n, cur + c, s):
                    return True

        backtrack(len(nums), "", st)
        return self.res