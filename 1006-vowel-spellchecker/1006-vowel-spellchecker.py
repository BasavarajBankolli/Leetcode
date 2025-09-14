class Solution:
    def spellchecker(self, wordlist: List[str], queries: List[str]) -> List[str]:
        s = 'aeiou'
        d = defaultdict(list) 

        
        for w in wordlist:
            a = ''
            for c in w:
                if c.lower() in s:
                    a += '*'
                else:
                    a += c.lower()
            if a not in d:  
                d[a].append(w)

        res = []
        for q in queries:

            if q in wordlist:
                res.append(q)
                continue

            
            lowq = q.lower()
            found = False
            for w in wordlist:
                if w.lower() == lowq:
                    res.append(w)
                    found = True
                    break
            if found:
                continue

            a = ''
            for c in q:
                if c.lower() in s:
                    a += '*'
                else:
                    a += c.lower()
            if a in d:
                res.append(d[a][0])  
            else:
                res.append('')    

        return res
