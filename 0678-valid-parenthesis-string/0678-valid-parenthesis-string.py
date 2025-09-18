class Solution:
    def checkValidString(self, s: str) -> bool:
        
        @lru_cache(None)
        def check(i, cnt):
            if cnt < 0:  
                return False
            if i == len(s):  
                return cnt == 0
            
            if s[i] == '(':
                return check(i+1, cnt+1)
            elif s[i] == ')':
                return check(i+1, cnt-1)
            else: 
                return (
                    check(i+1, cnt+1) or   
                    check(i+1, cnt-1) or   
                    check(i+1, cnt)        
                )
        
        return check(0, 0)