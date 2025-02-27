class Solution:
    def wordPattern(self, p: str, s: str) -> bool:
        ctw = {}
        wtc = {}
        s = s.split()

        if len(s) != len(p): return False

        for i, w in enumerate(s):
            if p[i] in ctw and ctw[p[i]] != w:
                return False

            if w in wtc and wtc[w] != p[i]:
                return False
            
            ctw[p[i]] = w
            wtc[w] = p[i]

        return True