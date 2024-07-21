# <img src="https://leetcode.com/_next/static/images/logo-ff2b712834cf26bf50a5de58ee27bcef.png" alt="LeetCode Logo" width="50" height="80"> Leetcode->58

Click on the link to view the <a href="https://leetcode.com/problems/length-of-last-word/description/" target="_blank">Question</a>

### Python
```python
class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
    
        return (len(s.split()[-1]))
```

### Output
```
"Hello World" --> 5 is length of string 'world'

```
