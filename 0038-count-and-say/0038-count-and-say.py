class Solution:
    def countAndSay(self, n: int) -> str:
        if n < 3:
            return "1"*n

        s = "1"
        for _ in range(n - 1):
            i = 0
            next_s = ""
            while i < len(s):
                count = 1
                while i + 1 < len(s) and s[i] == s[i + 1]:
                    i += 1
                    count += 1
                next_s += str(count) + s[i]
                i += 1
            s = next_s
        return s
