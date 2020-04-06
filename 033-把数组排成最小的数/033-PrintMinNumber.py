# -*- coding:utf-8 -*-
def compare(a,b):
    return  1 if a+b> b+a else -1
class Solution:
    def PrintMinNumber(self, numbers):
        # write code here
        numbers=map(str,numbers)
        return ''.join([str(x) for x in sorted(numbers,cmp=compare)])
