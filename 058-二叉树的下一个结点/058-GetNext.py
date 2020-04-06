# -*- coding:utf-8 -*-
# class TreeLinkNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
#         self.next = None
class Solution:
    def GetNext(self, pNode):
        # write code here
        if pNode.right is not None:
            ans=pNode.right
            while ans.left is not None:
                ans=ans.left
            return ans
        elif pNode.next and pNode.next.left is pNode:
            return pNode.next
        else:
            while pNode.next and pNode.next.left is not pNode:
                pNode=pNode.next
            return pNode.next
