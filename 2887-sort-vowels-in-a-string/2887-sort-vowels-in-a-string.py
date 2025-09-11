class Solution:
    def sortVowels(self, s: str) -> str:
        vls = 'AEIOUaeiou'
        
        lst = list(s)
        vb = []

        for c in lst:
            if c in vls:
                vb.append(c)

        vb.sort()

        i = 0
        for j in range(len(lst)):
            if lst[j] in vls:
                lst[j] = vb[i]
                i += 1

        return ''.join(lst)
