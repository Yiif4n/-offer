# -*- coding:utf-8 -*-
class Solution:
    def cutRope(self, number):
        # write code here
        if number<=3:
            return number-1
        qoutient,remainder=divmod(number,3)
        if remainder==1:
            return (3**(qoutient-1))*4
        elif remainder==2:
            return (3**qoutient)*2
        else:
            return 3**qoutient
