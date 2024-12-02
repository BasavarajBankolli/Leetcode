class Solution:
    def isPrefixOfWord(self, s: str,sw: str) -> int:
        words = s.split()
        
        for i,word in enumerate(words):
            if word.startswith(sw):
                return i + 1

        return -1