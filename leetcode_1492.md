# <img src="https://leetcode.com/_next/static/images/logo-ff2b712834cf26bf50a5de58ee27bcef.png" alt="LeetCode Logo" width="50" height="80"> Leetcode->1480

Click on the link to view the [Question](https://leetcode.com/problems/the-kth-factor-of-n/description/)


### Python
```python
def kthFactor(self, n, k):
        l = [1]
        
        for i in range (2 , n+1):
            if n % i == 0:
                l.append(i)
        if k <= len(l):
            return l[k-1]
        else:
            return -1
kthFactor(12,3)
```
### output
````
3
Explanation: Factors list is [1, 2, 3, 4, 6, 12], the 3rd factor is 3.
````
