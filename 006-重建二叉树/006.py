# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    # 返回构造的TreeNode根节点
    def reConstructBinaryTree(self, pre, tin):
        # write code here
        if not tin:
            return None
        T=TreeNode(pre[0])
        i=tin.index(pre.pop(0))
        T.left=self.reConstructBinaryTree(pre,tin[:i])
        T.right=self.reConstructBinaryTree(pre,tin[i+1:])
        return T
