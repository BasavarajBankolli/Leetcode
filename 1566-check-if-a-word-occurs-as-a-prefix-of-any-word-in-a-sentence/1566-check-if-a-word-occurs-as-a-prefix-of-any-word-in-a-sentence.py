class Solution:
    def isPrefixOfWord(self, s: str,sw: str) -> int:
        words = s.split()
        n = len(words)
        m = len(sw)

        for i in range(n):

            if len(words[i]) >= m:
                cnt = 0
                j = 0
                while j < m:
                    if words[i][j] == sw[cnt]:
                        cnt += 1
                    else:
                        break
                    j += 1
                
                if cnt == m:
                    return i + 1
                

        return -1