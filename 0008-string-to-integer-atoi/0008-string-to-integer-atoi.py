class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.lstrip()

        if not s:
            return 0

        sn = 1
        res = 0
        
        i = 0
        if s[i] == '-' or s[i] == '+':
            sn = -1 if s[i] == '-' else 1
            i += 1

        while i < len(s) and s[i] == 0:
            i += 1
        
        for i in range(i, len(s)):
            if s[i].isdigit():
                res = res*10 + int(s[i])
            
            else:
                break

        res *= sn
        mn, mx = -2**31, 2**31-1

        if res < mn:
            return mn
        elif res > mx:
            return mx

        return res        