class Solution:
    def largestGoodInteger(self, num: str) -> str:
        
        s = float('-inf')
        for i in range(len(num)-2):
            st = set(num[i: i + 3])
            cur = int(num[i: i + 3])
            
            if len(st) == 1 and cur >= s:
                s = cur

        if s == 0:
            return '000'
            
        return str(s) if s != float('-inf') else ""
            