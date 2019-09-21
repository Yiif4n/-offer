# -*- coding:utf-8 -*-
class Solution:
    def jumpFloorII(self, number):
        # write code here
        ans=1
        for i in range(1,number):
            ans=ans*2
        return ans
