
# <img src="https://leetcode.com/_next/static/images/logo-ff2b712834cf26bf50a5de58ee27bcef.png" alt="LeetCode Logo" width="50" height="80"> Leetcode->2418

Click on the link to view the [Question](https://leetcode.com/problems/sort-the-people/description/)


### Python
```python
class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        
        n = len(heights)
        hm: dict[int,str] = {}


        for i in range(n):
            hm[heights[i]] = names[i]

        heights.sort(reverse = True)

        for i in range(n):

            names[i] = hm[heights[i]]


        return names
```
### output
```
names = ["Alice","Bob","Bob"], heights = [155,185,150]

--> ["Bob","Alice","Bob"]


```
