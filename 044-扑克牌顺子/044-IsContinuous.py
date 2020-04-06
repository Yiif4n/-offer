# -*- coding:utf-8 -*-
class Solution:
    def IsContinuous(self, numbers):
        # write code here
        if len(numbers)<5:
            return False
        pool=set()
        mi=float('inf')
        ma=float('-inf')
        for val in numbers:
            if val!=0:
                if val in pool:
                    return False
                else:
                    pool.add(val)
                    mi=min(mi,val)
                    ma=max(ma,val)
        if ma-mi>4:
            return False
        return True
