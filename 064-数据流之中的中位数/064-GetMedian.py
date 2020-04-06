# -*- coding:utf-8 -*-
import heapq
class Solution:
    def __init__(self):
        self.minheap=[]
        self.maxheap=[]
        self.maxcount=0
        self.mincount=0
    def Insert(self, num):
        # write code here
        if (self.maxcount+self.mincount)&1==1:
            if num<-self.maxheap[0]:
                heapq.heappush(self.maxheap,-num)
                heapq.heappush(self.minheap,-heapq.heappop(self.maxheap))
            else:
                heapq.heappush(self.minheap,num)
            self.mincount+=1
        else:
            if (not self.maxheap) or num<-self.maxheap[0]:
                heapq.heappush(self.maxheap,-num)
            else:
                heapq.heappush(self.minheap,num)
                heapq.heappush(self.maxheap,-heapq.heappop(self.minheap))
            self.maxcount+=1

    def GetMedian(self,_):
        # write code here
        if (self.maxcount+self.mincount)&1==1:
            return -self.maxheap[0]
        else:
            return (-self.maxheap[0]+self.minheap[0])/2.0
