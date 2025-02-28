class Solution:
    def compress(self, chars: List[str]) -> int:
        idx, cnt = 0, 1
        i = 0
        for i in range(1, len(chars)):
            if (chars[i] == chars[i - 1]):
                cnt += 1

            elif (cnt == 1):
                chars[idx] = chars[i - 1]
                idx += 1

            elif (cnt != 1):
                chars[idx] = chars[i - 1]
                idx += 1
                for c in str(cnt):
                    chars[idx] = c
                    idx += 1
                cnt = 1
        
        if (cnt == 1):
            chars[idx] = chars[i]
            idx += 1
        
        elif (cnt != 1):
            chars[idx] = chars[i-1]
            idx += 1
            for c in str(cnt):
                chars[idx] = c
                idx += 1

        return idx