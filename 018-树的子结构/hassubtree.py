# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def HasSubtree(self, pRoot1, pRoot2):
        # write code here
        if pRoot2 is None:
            return False
        if pRoot1 is None and pRoot2 is not None:
            return False
        tag=False
        if pRoot2.val==pRoot1.val:
            tag=self.issubtree(pRoot1,pRoot2)
        if not tag:
            tag=self.HasSubtree(pRoot1.left,pRoot2)
            if not tag:
                tag=self.HasSubtree(pRoot1.right,pRoot2)
        return tag
    def issubtree(self,pRoot1, pRoot2):
        if pRoot2 is None:
            return True
        if pRoot2 is not None and pRoot1 is None:
            return False
        if pRoot2.val==pRoot1.val:
            return self.issubtree(pRoot1.left,pRoot2.left) and self.issubtree(pRoot1.right,pRoot2.right)
        else:
            return False
