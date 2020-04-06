# -*- coding:utf-8 -*-
class Solution:
    def GetNumberOfK(self, data, k):
        # write code here
        if len(data)==0:
            return 0
        return self.bisect(data,k+0.5)-self.bisect(data,k-0.5)
    def bisect(self,data,k):
        left=0
        right=len(data)-1
        while left<=right:
            mid=(left+right)//2
            if data[mid]==k:
                return mid
            elif data[mid]<k:
                left=mid+1
            else:
                right=mid-1
        return left
