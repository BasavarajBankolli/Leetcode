class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        res = 0

        for c in operations:
            if '-' in c:
                res -= 1
            
            elif '+' in c:
                res += 1

        return res