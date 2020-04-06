# -*- coding:utf-8 -*-
class Solution:
    def IsPopOrder(self, pushV, popV):
        # write code here
        if len(pushV)!=len(popV):
            return False
        stack=[]
        idx=0
        for v in pushV:
            stack.append(v)
            while stack and stack[-1]==popV[idx]:
                idx+=1
                stack.pop()
        return len(stack)==0
