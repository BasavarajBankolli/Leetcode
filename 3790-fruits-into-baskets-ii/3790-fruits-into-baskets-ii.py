class Solution:
    def numOfUnplacedFruits(self, fruits: List[int], baskets: List[int]) -> int:
        n = len(baskets)
        seen = set()

        for fruit in fruits:
            for i in range(n):
                if baskets[i] >= fruit and i not in seen:
                    seen.add(i)
                    break

                
        return n - len(seen)