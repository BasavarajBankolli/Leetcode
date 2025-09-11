class Solution:
    def sortVowels(self, s: str) -> str:
        vlb = 'AEIOU'
        vls = 'aeiou'
        
        lst = list(s)
        vb, vs = [], []


        for c in lst:
            if c in vls:
                vs.append(c)
            
            elif c in vlb:
                vb.append(c)

        vb.sort()
        vs.sort()

        vb += vs
        i = 0

        for j in range(len(lst)):
            if lst[j] in vls or lst[j] in vlb:
                lst[j] = vb[i]
                i += 1

        return ''.join(lst)
