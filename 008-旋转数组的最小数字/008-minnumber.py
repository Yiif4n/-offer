# -*- coding:utf-8 -*-
class Solution:
    def minNumberInRotateArray(self, rotateArray):
        # write code here
        # return min(rotateArray)
        if len(rotateArray)==0:
            return 0
        left=0
        right=len(rotateArray)-1
        while left<right:
            mid=(left+right)//2
            if rotateArray[mid]>rotateArray[right]:
                left=mid+1
            elif rotateArray[mid]==rotateArray[right]:
                right=right-1
            else:
                right=mid
        return rotateArray[left]
