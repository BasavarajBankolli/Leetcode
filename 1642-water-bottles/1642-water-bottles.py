class Solution:
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
        res = numBottles
        empty = numBottles

        while empty >= numExchange:
            tmp = empty // numExchange
            rem = empty % numExchange

            res += tmp
            empty = rem + tmp

        return res
