# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def Print(self, pRoot):
        # write code here
        if pRoot is None:
            return []
        stack1=[pRoot]
        stack2=[]
        ans=[]
        while stack1 or stack2:
            if stack1:
                temp=[]
                for i in range(len(stack1)):
                    node=stack1.pop(-1)
                    temp.append(node.val)
                    if node.left is not None:
                        stack2.append(node.left)
                    if node.right is not None:
                        stack2.append(node.right)
                ans.append(temp)
            else:
                temp=[]
                for i in range(len(stack2)):
                    node=stack2.pop(-1)
                    temp.append(node.val)
                    if node.right is not None:
                        stack1.append(node.right)
                    if node.left is not None:
                        stack1.append(node.left)
                ans.append(temp)
        return ans
