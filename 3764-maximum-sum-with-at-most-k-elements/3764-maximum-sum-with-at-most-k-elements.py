import heapq

class Solution:
    def maxSum(self, grid: List[List[int]], limits: List[int], k: int) -> int:
        
        mnheap = []
        for i in range(len(grid)):
            for v in grid[i]:
                mnheap.append((-v, i))

        heapq.heapify(mnheap)
        res = 0

        while k:
            while mnheap and limits[mnheap[0][1]] <= 0:
                heapq.heappop(mnheap)

            
            res += abs(mnheap[0][0])
            limits[mnheap[0][1]] -= 1
            heapq.heappop(mnheap)
            k -= 1

        
        return res