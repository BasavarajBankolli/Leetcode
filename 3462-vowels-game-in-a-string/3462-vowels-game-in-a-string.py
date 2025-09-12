class Solution:
    def doesAliceWin(self, s: str) -> bool:
        a = [0]*26

        for c in s:
            a[ord(c) - ord('a')] += 1


        vowels = a[0] + a[4] + a[8] + a[14] + a[20]
        
        if vowels == 0:
            return False

        return True

        