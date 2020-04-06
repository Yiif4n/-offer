# -*- coding:utf-8 -*-
class Solution:
    def FindContinuousSequence(self, tsum):
        # write code here
        if tsum<3:
            return []
        small=1
        big=2
        csum=small+big
        ans=[]
        while small<(1+tsum)//2:
            if csum==tsum:
                ans.append(list(range(small,big+1)))
                big+=1
                csum+=big
            elif csum<tsum:
                big+=1
                csum+=big
            else:
                csum-=small
                small+=1
        return ans
