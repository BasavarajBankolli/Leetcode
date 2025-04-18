class Solution:
    def smallestPalindrome(self, s: str) -> str:
        counter = Counter(s)
        
        left_half = []
        middle_char = ""
        
        for c in sorted(counter.keys()):
            freq = counter[c]
            if freq % 2 == 1:
                middle_char = c
            left_half.append(c * (freq // 2))
            
        left_str = ''.join(left_half)
        return left_str + middle_char + left_str[::-1]