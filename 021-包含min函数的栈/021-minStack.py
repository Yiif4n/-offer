# -*- coding:utf-8 -*-
class Solution:
    #def __init__(self):
    #    self.stack1=[]
    #    self.stack2=[]
    #def push(self, node):
    #    # write code here
    #    self.stack1.append(node)
    #    if not self.stack2 or self.stack2[-1]>node:
    #        self.stack2.append(node)
    #    else:
    #        self.stack2.append(self.stack2[-1])
    #    
    #def pop(self):
    #    # write code here
    #    self.stack1.pop()
    #    self.stack2.pop()
    #def top(self):
    #    # write code here
    #    return self.stack1[-1]
    #def min(self):
        # write code here
    #    return self.stack2[-1]
    def __init__(self):
        self.minmum=0
        self.stack=[]
    def push(self, node):
        # write code here
        if not self.stack:
            self.minmum=node
            self.stack.append(0)
        else:
            diff=node-self.minmum
            self.stack.append(diff)
            self.minmum=self.minmum if diff>0 else node
    def pop(self):
        # write code here
        diff=self.stack.pop()
        self.minmum=self.minmum if diff>0 else self.minmum-diff
    def top(self):
        # write code here
        if self.stack[-1]>0:
            return self.stack[-1]+self.minmum
        return self.minmum
    def min(self):
        # write code here
        return self.minmum
