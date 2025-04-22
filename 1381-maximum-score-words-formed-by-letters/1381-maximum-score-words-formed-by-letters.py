class Solution:
    def maxScoreWords(self, words: List[str], letters: List[str], score: List[int]) -> int:
        def subs(lst):
            return list(chain.from_iterable(combinations(lst, r) for r in range(len(lst)+1)))   

        n = len(letters)
        ref = []
        for a in subs(words):
            total_length = sum(len(word) for word in a)
            if 0 < total_length <= n:
                ref.append(a)

        ls = [0] * 26
        for c in letters:
            ls[ord(c) - ord('a')] += 1

        mx = 0
        for arr in ref:
            freq = [0] * 26
            ok = 1
            for word in arr:
                for c in word:
                    freq[ord(c) - ord('a')] += 1
                    if freq[ord(c) - ord('a')] > ls[ord(c) - ord('a')]:
                        ok = 0
                        break

            cnt = 0
            if ok:
                cnt = sum(freq[i]*score[i] for i in range(26))
                mx = max(mx, cnt)

        return mx
