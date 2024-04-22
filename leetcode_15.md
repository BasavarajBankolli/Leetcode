
# <img src="https://leetcode.com/_next/static/images/logo-ff2b712834cf26bf50a5de58ee27bcef.png" alt="LeetCode Logo" width="50" height="80"> Leetcode->15 

Click on the link to view the [Question](https://leetcode.com/problems/running-sum-of-1d-array/description/)


### Python
```python
def threeSum(self, nums):       
        nums.sort()
        res=[]
       

        for i in range(len(nums)-2):
            if i > 0 and nums[i] == nums[i-1]:
                continue

            left = i + 1
            right = len(nums) - 1

            while left < right:
                cur_sum = nums[i] + nums[left] + nums[right]

                if cur_sum==0:
                    res.append([nums[i],nums[left],nums[right]])
                    while left < right and nums[left] == nums[left + 1]:
                        left+=1
                    while left < right and nums[right] == nums[right-1]:
                        right -= 1
                    left += 1
                    right -= 1
                elif cur_sum < 0:
                    left += 1
                else:
                    right -= 1
                
                    
        return res
threeSum([-1,0,1,2,-1,-4])
```
### Output
```
[[-1,-1,2],[-1,0,1]]
```
