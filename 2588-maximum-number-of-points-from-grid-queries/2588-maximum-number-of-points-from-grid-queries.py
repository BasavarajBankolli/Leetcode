class Solution:
    def maxPoints(self, grid: List[List[int]], qu: List[int]) -> List[int]:
        rows, cols = len(grid), len(grid[0])
        sort_qs = [(v,i) for i,v in enumerate(qu)]

        sort_qs.sort()

        min_heap = [(grid[0][0], 0, 0)]
        res = [0]*len(qu)
        cur_points = 0
        visit = {(0,0)}
        for q, i in sort_qs:

            while min_heap and min_heap[0][0] < q:
                val, r, c = heappop(min_heap)
                cur_points += 1

                neighbors = [[r+1, c],[r-1, c], [r,c+1], [r, c-1]]

                for nr,nc in neighbors:

                    if 0 <= nr < rows and 0 <= nc < cols and (nr, nc) not in visit:
                        heappush(min_heap,(grid[nr][nc],nr,nc))
                        visit.add((nr,nc))
            res[i] = cur_points

        return res