class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []

        def backtrack(cur, open, close):
            if len(cur) == 2 * n:
                res.append(cur)
                return
            if open < n:
                backtrack(cur + '(', open + 1, close)
            if close < open:
                backtrack(cur + ')', open, close + 1)

        backtrack("", 0, 0)
        return res