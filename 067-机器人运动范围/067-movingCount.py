# -*- coding:utf-8 -*-
class Solution:
    def movingCount(self, threshold, rows, cols):
        # write code here
        if threshold<0:
            return 0
        visited=[False]*(rows*cols)
        return self.getcount(threshold,rows,cols,0,0,visited)
    def getcount(self,threshold,rows,cols,i,j,visited):
        idx=i*cols+j
        if i<0 or j<0 or i>=rows or j>=cols or visited[idx] or self.notvalid(threshold,i,j):
            return 0
        visited[idx]=True
        count=1+self.getcount(threshold,rows,cols,i-1,j,visited)+\
        self.getcount(threshold,rows,cols,i,j-1,visited)+\
        self.getcount(threshold,rows,cols,i,j+1,visited)+\
        self.getcount(threshold,rows,cols,i+1,j,visited)
        return count
    def notvalid(self,threshold,i,j):
        res=0
        while i:
            res+=i%10
            i=i//10
        while j:
            res+=j%10
            j=j//10
        return res>threshold
