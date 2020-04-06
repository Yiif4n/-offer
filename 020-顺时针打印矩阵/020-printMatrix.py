# -*- coding:utf-8 -*-
class Solution:
    # matrix类型为二维列表，需要返回列表
    def printMatrix(self, matrix):
        # write code here
        if len(matrix)==0:
            return []
        up=-1
        down=len(matrix)
        left=-1
        right=len(matrix[0])
        ans=[]
        direction=1 #向右：1 向下：2 向左：3  向上：4
        i=0
        j=0
        for n in range(down*right):
            ans.append(matrix[i][j])
            if direction==1 and j<right:
                j+=1
                if j==right:
                    j-=1
                    i+=1
                    direction=2
                    up+=1
                continue
            if direction==2 and i<down:
                i+=1
                if i==down:
                    i-=1
                    j-=1
                    direction=3
                    right-=1
                continue
            if direction==3 and j>left:
                j-=1
                if j==left:
                    j+=1
                    i-=1
                    direction=4
                    down-=1
                continue
            if direction==4 and i>up:
                i-=1
                if i==up:
                    i+=1
                    j+=1
                    direction=1
                    left+=1
                continue
        return ans 
