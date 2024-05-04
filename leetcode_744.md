# <img src="https://leetcode.com/_next/static/images/logo-ff2b712834cf26bf50a5de58ee27bcef.png" alt="LeetCode Logo" width="50" height="80"> Leetcode->744

Click on the link to view the [Question](https://leetcode.com/problems/find-smallest-letter-greater-than-targe)


### Python
```python
def nextGreatestLetter(self, letters, target):
 
        l = 0
        r = len(letters)-1
        
        while l <= r:
                mid = (l+r)//2
                if letters[mid] > target:
                    r = mid - 1
                else:
                    l = mid + 1
            
        return letters[0] if target>=letters[-1] else  letters[l]

nextGreatestLetter(["c","f","j"],"a")
```
### output
```
"c"
Explanation: The smallest character that is lexicographically greater than 'a' in letters is 'c'.
````
