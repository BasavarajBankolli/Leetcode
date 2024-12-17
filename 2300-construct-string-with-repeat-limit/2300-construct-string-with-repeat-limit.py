class Solution:
    def repeatLimitedString(self, s: str, repeatLimit: int) -> str:
        s = list(s)
        result = []
        freq = 0
        pointer = 0

        s.sort(reverse=True)

        for i in range(len(s)):
            if result and result[-1] == s[i]:
                if freq < repeatLimit:
                    result.append(s[i])
                    freq += 1
                else:
                    pointer = max(pointer, i + 1)
                    while pointer < len(s) and s[pointer] == s[i]:
                        pointer += 1

                    if pointer < len(s):
                        result.append(s[pointer])
                        s[i], s[pointer] = s[pointer], s[i]
                        freq = 1
                    else:
                        break
            else:
                result.append(s[i])
                freq = 1

        return ''.join(result)