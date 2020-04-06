# -*- coding:utf-8 -*-
class Solution:
    def GetUglyNumber_Solution(self, index):
        # write code here
        if index<=0:
            return 0
        ugly=[1]
        idx2=0
        idx3=0
        idx5=0
        while index>1:
            val=min(ugly[idx2]*2,ugly[idx3]*3,ugly[idx5]*5)
            if val==ugly[idx2]*2:
                idx2+=1
            if val==ugly[idx3]*3:
                idx3+=1
            if val==ugly[idx5]*5:
                idx5+=1
            ugly.append(val)
            index-=1
        return ugly[-1]
