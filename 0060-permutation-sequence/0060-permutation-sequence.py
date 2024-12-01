
#from itertools import permutations
class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        s = ""
        for v in range(1,n + 1):
            s += str(v)
            
        lst = ["".join(p) for p in permutations(s)] 

        return lst[k - 1]