# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
import copy
class Solution:
    # 返回二维列表，内部每个列表表示找到的路径
    def __init__(self):
        self.ans=[]
    def FindPath(self, root, expectNumber):
        # write code here
        if root is None:
            return []
        self.find(root,expectNumber,0,[])
        return self.ans
    def find(self,root,expectNumber,cur,path):
        cur+=root.val
        path.append(root.val)
        if cur==expectNumber and root.left is None and root.right is None:
            self.ans.append(path)
        if root.left is not None:
            self.find(root.left,expectNumber,cur,copy.copy(path))
        if root.right is not None:
            self.find(root.right,expectNumber,cur,copy.copy(path))
