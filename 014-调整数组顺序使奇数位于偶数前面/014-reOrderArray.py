# -*- coding:utf-8 -*-
class Solution:
    def reOrderArray(self, array):
        # write code here
        for i in range(len(array)):
            isswap=False
            for j in range(len(array)-i-1):
                if array[j]%2==0 and array[j+1]%2==1:
                    array[j],array[j+1]=array[j+1],array[j]
                    isswap=True
            if not isswap:
                break
        return array
