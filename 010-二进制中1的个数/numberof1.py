# -*- coding:utf-8 -*-
INT_BITS = 32 
MAX_INT = (1 << (INT_BITS - 1)) - 1  # Maximum Integer for INT_BITS
class Solution:
    def NumberOf1(self, num):
        count = 0
        while num:
            if num < - MAX_INT - 1 or num > MAX_INT:
                break
            count += 1
            num = num & (num-1)
        return count
