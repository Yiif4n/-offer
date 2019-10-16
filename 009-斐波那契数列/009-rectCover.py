# -*- coding:utf-8 -*-
class Solution:
    def rectCover(self, number):
        # write code here
        if number<=2:
            return number
        a,b=1,2
        while number>=3:
            a,b=b,a+b
            number-=1
        return b
