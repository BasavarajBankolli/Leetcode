class Solution:
    def wordBreak(self, s: str, words: List[str]) -> bool:
        bp = [False]*(len(s) + 1)
        
        bp[-1] = True
        
        for i in range(len(s)-1, -1, -1):
            
            for w in words:
                
                if i + len(w) <= len(s) and s[i:i+len(w)] == w:
                    bp[i] = bp[i+len(w)]
                
                if bp[i]:
                    break
                
        return bp[0]