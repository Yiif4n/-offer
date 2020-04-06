# -*- coding:utf-8 -*-
class Solution:
    def InversePairs(self, data):
        # write code here
        if len(data)<=1:
            return 0
        return self.merge_sort(data,0,len(data))%1000000007
    def merge_sort(self,data,start,end):
        if end-start<=1:
            return 0
        mid=(start+end)//2
        left=self.merge_sort(data,start,mid)
        right=self.merge_sort(data,mid,end)
        count=left+right
        j=mid
        for i in range(start,mid):
            while(j<end and data[i]>data[j]):
                j+=1
            count+=j-mid
        self.merge(data,start,end)
        return count
    def merge(self,data,start,end):
        data[start:end]=sorted(data[start:end])
