# -*- coding:utf-8 -*-
class Solution:
    def maxInWindows(self, num, size):
        # write code here
        if size==0:
            return []
        deque=[]
        ans=[]
        for idx,val in enumerate(num):
            if idx>=size and idx-size==deque[0]:
                deque.pop(0)
            while deque and num[deque[-1]]<=val:
                deque.pop()
            deque.append(idx)
            if idx>=size-1:
                ans.append(num[deque[0]])
        return ans
