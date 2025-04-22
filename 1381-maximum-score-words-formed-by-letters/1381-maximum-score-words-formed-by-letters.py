class Solution:
    def pickWord(self, i, words, curScore, letters, score):
        if i == len(words):
            return curScore
        
        cntSt = []
        complt = True
        for c in words[i]:
            idx = ord(c) - ord("a")
            if letters[idx] > 0:
                letters[idx]-=1
                cntSt.append(idx)
                curScore+=score[idx]
            else:
                complt = False
                break

        ans = 0
        if complt:
            ans = max(ans, self.pickWord(i+1, words, curScore, letters, score))
            
        for counted in cntSt:
            letters[counted]+=1
            curScore-=score[counted]
        return max(ans, self.pickWord(i+1, words, curScore, letters, score))




    def maxScoreWords(self, words: List[str], letters: List[str], score: List[int]) -> int:
        letter = [0 for _ in range(26)]
        for l in letters:
            letter[ord(l)-ord("a")]+=1
        
        return self.pickWord(0, words, 0, letter, score)