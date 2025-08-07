class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        d = defaultdict(int)

        mx = 0
        for n in nums:
            if not d[n]:
                d[n] = d[n-1] + d[n+1] + 1
                d[n-d[n-1]] = d[n]
                d[n+d[n+1]] = d[n]


                mx = max(mx, d[n])

        return mx