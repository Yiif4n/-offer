# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def IsBalanced_Solution(self, pRoot):
        if pRoot==None:
            return True
        else:
            return self.balance(pRoot)>=0
    def balance(self,root):
        if root==None:
            return 0
        if root.left==None and root.right==None:
            return 1
        left=self.balance(root.left) 
        right=self.balance(root.right)
        if left==-1 or right==-1:
            return -1
        if abs(left-right)<=1:
            return max(left,right)+1
        else:
            return -1
            
