class Solution:
    def pickGifts(self, gifts: List[int], k: int) -> int:
        
        for _ in range(k):
            mx = gifts.index(max(gifts))

            gifts[mx] = math.floor(sqrt(gifts[mx]))


        return sum(gifts)

