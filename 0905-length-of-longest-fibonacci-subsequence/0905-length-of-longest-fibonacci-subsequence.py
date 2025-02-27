class Solution:
    def lenLongestFibSubseq(self, arr: List[int]) -> int:
        s = set(arr)
        mx = 0
        cnt = 0
        for i in range(len(arr)):
            for j in range(i+1,len(arr)):
                nxt = arr[i] + arr[j]
                prev = arr[j]
                cnt = 2
                while nxt in s:
                    cnt += 1
                    tmp = nxt
                    nxt += prev
                    prev = tmp

                if cnt != 2:
                    mx = max(cnt, mx)

        return mx
                    
                    
