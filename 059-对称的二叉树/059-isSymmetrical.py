# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def isSymmetrical(self, pRoot):
        # write code here
        if pRoot is None:
            return True
        return self.subTreeIsSymmetrical(pRoot.left,pRoot.right)
    def subTreeIsSymmetrical(self,lroot,rroot):
        if lroot is None and rroot is None:
            return True
        if lroot and rroot and lroot.val==rroot.val:
            return self.subTreeIsSymmetrical(lroot.left,rroot.right) and self.subTreeIsSymmetrical(lroot.right,rroot.left)
        return False
