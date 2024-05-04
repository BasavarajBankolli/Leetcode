# <img src="https://leetcode.com/_next/static/images/logo-ff2b712834cf26bf50a5de58ee27bcef.png" alt="LeetCode Logo" width="50" height="80"> Leetcode->881

Click on the link to view the [Question](https://leetcode.com/problems/boats-to-save-people/description/)


### Python
```python
def numRescueBoats(self, people, limit):
        people.sort()
        times = 0
        left = 0 
        right = len(people)-1
        while left <= right:
            times+=1
            if people[left] + people[right] <= limit:
                left += 1
            right -= 1
        return times
numRescueBoats([3,2,2,1],3)
```
### output
```
3
Explanation: 3 boats (1, 2), (2) and (3)
```
