# <img src="https://leetcode.com/_next/static/images/logo-ff2b712834cf26bf50a5de58ee27bcef.png" alt="LeetCode Logo" width="50" height="80"> Leetcode->268

Click on the link to view the [Question](https://leetcode.com/problems/missing-number/description/)


### Python
```python
class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        som = sum(nums)
        n = len(nums)
        total_som = n*(n+1) // 2
        

        return total_som - som
```
### output
```
[9,6,4,2,3,5,7,0,1]

Missing number is 8

```
