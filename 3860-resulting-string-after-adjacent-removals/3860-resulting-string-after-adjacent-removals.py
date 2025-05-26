class Solution:
    def resultingString(self, s: str) -> str:
        st = []

        for c in s:
            st.append(c)

            while len(st) > 1 and (
    (ord(st[-1]) - ord('a')) % 26 == (ord(st[-2]) - ord('a') + 1) % 26 or
    (ord(st[-2]) - ord('a')) % 26 == (ord(st[-1]) - ord('a') + 1) % 26
):
                st.pop()
                st.pop()

        return ''.join(st) 