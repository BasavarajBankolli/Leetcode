# <img src="https://leetcode.com/_next/static/images/logo-ff2b712834cf26bf50a5de58ee27bcef.png" alt="LeetCode Logo" width="50" height="80"> Leetcode->2

Click on the link to view the [Question]([https://leetcode.com/problems/running-sum-of-1d-array/description/](https://leetcode.com/problems/two-sum/description/))


### Python
```python
def twoSum(self, nums, target):
        n=len(nums)
        for i in range(n):
            m=target-nums[i]
            for j in range(i+1,n):
                if nums[j]==m:
                     return [i,j]

twoSum([2,7,11,15],9)
```
### Output
```
[0,1]
```
