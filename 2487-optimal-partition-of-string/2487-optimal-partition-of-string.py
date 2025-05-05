class Solution:
    def partitionString(self, s: str) -> int:
        cnt = 1
        seen = set()
        
        for c in s:
            if c in seen:
                cnt += 1
                seen = {c}
            else:
                seen.add(c)

        return cnt