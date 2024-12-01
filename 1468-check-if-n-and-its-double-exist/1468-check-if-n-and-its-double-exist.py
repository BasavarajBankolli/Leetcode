class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        n = len(arr)
        d = defaultdict(int)

        for i in range(n):
            if arr[i]*2 in d or arr[i]/2 in d:
                return True
            else :
                d[arr[i]] += 1 

        return False
