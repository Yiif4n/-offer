# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def Convert(self, pRootOfTree):
        # write code here
        if pRootOfTree is None:
            return None
        last=self.cvt(pRootOfTree,None)
        while last.left is not None:
            last=last.left
        return last
    def cvt(self,root,lastnode):
        if root.left is not None:
            lastnode=self.cvt(root.left,lastnode)
        if lastnode is not None:
            lastnode.right=root
            root.left=lastnode
        lastnode=root
        if root.right is not None:
            lastnode=self.cvt(root.right,lastnode)
        return lastnode
