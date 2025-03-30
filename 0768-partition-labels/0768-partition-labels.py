class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        lastidx = [-1]*26

        for i,c in enumerate(s): 
            lastidx[ord(c) - ord('a')] = i

        res = []
        sz, end = 0, 0
        for i, c in enumerate(s):
            sz += 1
            end = max(end, lastidx[ord(c) - ord('a')])
            
            if i == end:
                res.append(sz)
                sz = 0

        return res