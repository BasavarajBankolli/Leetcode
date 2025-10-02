class Solution:
    def maxBottlesDrunk(self, numBottles: int, numExchange: int) -> int:
        res = numBottles
        empty = numBottles

        while empty >= numExchange:
            
            rem = 0
            while empty >= numExchange:
                empty -= numExchange
                numExchange += 1
                rem += 1

            res += rem
            empty += rem
        
        return res
