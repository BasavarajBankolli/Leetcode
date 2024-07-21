# <img src="https://leetcode.com/_next/static/images/logo-ff2b712834cf26bf50a5de58ee27bcef.png" alt="LeetCode Logo" width="50" height="80"> Leetcode->1480

Click on the link to view the [Question](https://leetcode.com/problems/running-sum-of-1d-array/description/)


### Python
```python
class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        for i in range(1, len(nums)):
            nums[i] += nums[i - 1]
        return nums
```
### output
```
[3,1,2,10,1]
Output: [3,4,6,16,17] --> for 1st element  = 3
                          for 2nd element  = 3 + 1 =4
                          for 3rd element  = 4 + 2 = 6
                          for 4th element  = 6 + 10 = 16
                          for 5th element  = 16 + 1 = 17


```
