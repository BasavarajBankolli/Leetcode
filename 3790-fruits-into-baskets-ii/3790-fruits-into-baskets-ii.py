class Solution:
    def numOfUnplacedFruits(self, fruits: List[int], baskets: List[int]) -> int:
        n = len(baskets)
        seen = [0]*n
        cnt = 0

        for fruit in fruits:
            for i in range(n):
                if baskets[i] >= fruit and not seen[i]:
                    seen[i] = 1
                    cnt += 1
                    break

                
        return n - cnt