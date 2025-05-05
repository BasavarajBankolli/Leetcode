class Solution:
    def groupThePeople(self, a: List[int]) -> List[List[int]]:
        cnt = defaultdict(list)

        res = []
        for i in range(len(a)):
            cnt[a[i]].append(i)

        for i, lst in cnt.items():
            n = len(lst)
            prev = 0
            k = i
            while k < n:
                res.append(lst[prev: k])
                prev = k
                k = k + i
                
            res.append(lst[prev:min(n,k+i)])

        return res




        
        