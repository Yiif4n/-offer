# -*- coding:utf-8 -*-
class Solution:
    # array 二维列表
    def Find(self, target, array):
        # write code here
        ilen=len(array)
        jlen=len(array[0])
        i=ilen-1
        j=0
        while j<=jlen-1 and i>=0:
            if array[i][j]==target:
                return True
            elif array[i][j]<target:
                j+=1
            else:
                i-=1
        return False
