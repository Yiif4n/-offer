# -*- coding:utf-8 -*-
class Solution:
    def hasPath(self, matrix, rows, cols, path):
        # write code here
        if not path or not matrix:
            return False
        flag=[False]*len(matrix)
        for i in range(rows):
            for j in range(cols):
                if self.ismatch(matrix,rows,cols,i,j,flag,path,0):
                    return True
        return False

    def ismatch(self,matrix,rows,cols,i,j,flag,path,k):
        idx=cols*i+j
        if i<0 or j<0 or i>=rows or j>=cols or flag[idx] or matrix[idx]!=path[k]:
            return False
        flag[idx]=True
        if k==len(path)-1:
            return True
        if self.ismatch(matrix,rows,cols,i+1,j,flag,path,k+1) or \
        self.ismatch(matrix,rows,cols,i,j+1,flag,path,k+1) or \
        self.ismatch(matrix,rows,cols,i-1,j,flag,path,k+1) or \
        self.ismatch(matrix,rows,cols,i,j-1,flag,path,k+1):
            return True
        flag[idx]=False
        return False
