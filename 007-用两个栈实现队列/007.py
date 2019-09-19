# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        self.pushstack=[]
        self.popstack=[]
    def push(self, node):
        # write code here
        self.pushstack.append(node)
    def pop(self):
        # return xx
        if self.popstack:
            return self.popstack.pop()
        if self.pushstack:
            while self.pushstack:
                self.popstack.append(self.pushstack.pop())
            return self.popstack.pop()
        else:
            return None
