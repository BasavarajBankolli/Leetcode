# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumRootToLeaf(self, root: Optional[TreeNode]) -> int:
        
        res = 0
        def dfs(node, s):
            nonlocal res
            if not node:
                return 

            s.append(str(node.val))
            if node.left == None and node.right == None:
                num = ''.join(s)
                res += int(num, 2)

            else:
                dfs(node.left, s)
                dfs(node.right, s)
            
            s.pop()

        dfs(root, [])

        return res

            