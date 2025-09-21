class Solution:
    def minSplitMerge(self, nums1: List[int], nums2: List[int]) -> int:
        n = len(nums1)
        st = tuple(nums1)
        req = tuple(nums2)

        if st == req:
            return 0

        q = deque([(st, 0)])
        s = {st}
        while q:
            cur, steps = q[0]
            q.popleft()

            for l in range(n):
                for r in range(l , n):
                    suba = cur[l:r+1]
                    rem = cur[:l] + cur[r+1:]

                    m = len(rem)

                    for pos in range(m+1):
                        if pos == l:
                            continue

                        comb = rem[:pos] + suba + rem[pos:]
                        tp = tuple(comb)

                        if tp == req:
                            return steps + 1

                        if tp not in s:
                            s.add(tp)
                            q.append((tp, steps+1))
        return -1


