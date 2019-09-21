# -*- coding:utf-8 -*-
class Solution:
    def jumpFloor(self, number):
        # write code here
        a=0
        b=1
        while number>0:
            a,b=b,a+b
            number-=1
        return b
