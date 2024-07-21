# <img src="https://leetcode.com/_next/static/images/logo-ff2b712834cf26bf50a5de58ee27bcef.png" alt="LeetCode Logo" width="50" height="80"> Leetcode->2778

Click on the link to view the [Question](https://leetcode.com/problems/sum-of-squares-of-special-elements/description/)


### Python
```python
class Solution(object):
    def sumOfSquares(self, nums):
        n = len (nums)
        ans = 0
        for i in range (1,n+1):
            if n % i == 0:
                ans = ans + nums[i-1]**2

        return ans
        
```
### output
```
[2,7,1,19,18,3]
63
Explaination --> There are exactly 4 special elements in nums: nums[1] since 1 divides 6, nums[2] since 2 divides 6, nums[3] since 3 divides 6, and nums[6] since 6 divides 6. 
Hence, the sum of the squares of all special elements of nums is nums[1] * nums[1] + nums[2] * nums[2] + nums[3] * nums[3] + nums[6] * nums[6] = 2 * 2 + 7 * 7 + 1 * 1 + 3 * 3 = 63.

```
