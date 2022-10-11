# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        d = {}
        
        def f(rt, dp):
            if(rt==None):
                return 
            if(dp in d):
                d[dp].append(rt.val)
            else:
                d[dp] = [rt.val]
            
            f(rt.left, dp+1)
            f(rt.right, dp+1)
        
        f(root, 0)
        ans = []
        ind = 0
        for i in sorted(d.keys()):
            if(ind%2==0):
                ans.append(d[i])
            else:
                ans.append(d[i][::-1])
            ind+=1
        return ans
