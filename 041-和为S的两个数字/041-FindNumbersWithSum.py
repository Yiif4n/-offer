# -*- coding:utf-8 -*-
class Solution:
    def FindNumbersWithSum(self, array, tsum):
        # write code here
        pool=set()
        val1=float('inf')
        val2=float('inf')
        for val in array:
            diff=tsum-val
            if diff in pool:
                if val1*val2>diff*val:
                    val1,val2=diff,val
            else:
                pool.add(val)
        if val1==float('inf'):
            return []
        return val1,val2
