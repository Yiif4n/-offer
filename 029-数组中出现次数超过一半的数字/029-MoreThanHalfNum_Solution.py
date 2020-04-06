# -*- coding:utf-8 -*-
class Solution:
    def MoreThanHalfNum_Solution(self, numbers):
        # write code here
        dic=dict()
        for i in numbers:
            if i in dic:
                dic[i]+=1
            else:
                dic[i]=1
        for key,value in dic.items():
            if value>(len(numbers)//2):
                return key
        return 0
