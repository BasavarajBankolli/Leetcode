from collections import defaultdict
from bisect import bisect_left
from typing import List

class Solution:
    def solveQueries(self, nums: List[int], queries: List[int]) -> List[int]:
        
        def binsearch(arr, k, sz):
            n = len(arr)
            idx = bisect_left(arr, k)

            if n == 1:
                return -1

            if idx == 0:
                return min(sz - arr[-1] + arr[0], arr[1] - arr[0])
            elif idx == n - 1:
                return min(arr[-1] - arr[-2], sz - arr[-1] + arr[0])
            else:
                return min(arr[idx] - arr[idx - 1], arr[idx + 1] - arr[idx])

        map = defaultdict(list)
        n = len(nums)

        for i, num in enumerate(nums):
            map[num].append(i)

        res = []
        for q in queries:
            if nums[q] in map:
                res.append(binsearch(map[nums[q]], q, n))
            else:
                res.append(-1)

        return res
