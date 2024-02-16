```python
class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        l=[0]
        for i in range (len(nums)):
            n=l[len(l)-1]+nums[i]
            l.append(n)
        l.pop(0)
        return l
```
