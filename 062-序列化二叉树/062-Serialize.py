# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def Serialize(self, root):
        # write code here
        se=[]
        def helper(root):
            if root is None:
                se.append('#')
                return 
            se.append(str(root.val))
            helper(root.left)
            helper(root.right)
        helper(root)
        return ','.join(se)

    def Deserialize(self, s):
        # write code here
        def helper(data_list):
            if not data_list:
                return None
            cur = data_list.pop(0)
            if cur == '#':
                return None
            root = TreeNode(int(cur))
            root.left = helper(data_list)
            root.right = helper(data_list)
            return root
        data_list=s.split(',')
        return helper(data_list)
