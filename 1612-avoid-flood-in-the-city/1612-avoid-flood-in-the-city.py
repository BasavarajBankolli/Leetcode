class Solution:
    def avoidFlood(self, rains):
        n = len(rains)
        res = [-1] * n
        full = {}
        zeroIdx = []  

        for i, lake in enumerate(rains):
            if lake == 0:
                bisect.insort(zeroIdx, i)
                res[i] = 1 
            else:
                if lake in full:
                    prev = full[lake]
                    idx = bisect.bisect_right(zeroIdx, prev)
                    if idx == len(zeroIdx):
                        return []  # no future dry day available
                    dry_day = zeroIdx.pop(idx)
                    res[dry_day] = lake
                full[lake] = i
        return res
