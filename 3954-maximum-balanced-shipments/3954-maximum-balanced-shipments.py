class Solution:
    def maxBalancedShipments(self, w: List[int]) -> int:
        cnt = 0
        res = 0
        
        mx = w[-1]
        for i in range(len(w) - 1, -1, -1):
            cnt += 1

            if w[i] > mx and cnt >= 1:
                res += 1
                cnt = 1

                mx = w[i-1] if i > 0 else w[0]

            else:
                mx = w[i]
            
        
        return res

        
                