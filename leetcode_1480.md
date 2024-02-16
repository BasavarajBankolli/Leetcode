# <img src="https://leetcode.com/_next/static/images/logo-ff2b712834cf26bf50a5de58ee27bcef.png" alt="LeetCode Logo" width="50" height="80"> Leetcode->1480

Click on the link to view the [Question](https://leetcode.com/problems/running-sum-of-1d-array/description/)


### Python
```python
def runningSum( nums):

        l=[0]
        for i in range (len(nums)):
            n=l[len(l)-1]+nums[i]
            l.append(n)
        l.pop(0)
        return l

runningSum([1,2,3,4])
```
### Output
```
[1,3,6,10]
```

