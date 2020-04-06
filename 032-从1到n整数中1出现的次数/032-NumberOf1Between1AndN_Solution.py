# -*- coding:utf-8 -*-
class Solution:
    def NumberOf1Between1AndN_Solution(self, n):
        if n <= 0 : return 0
        
        operator = 1
        count = 0
        
        while n // operator:
            curr = n % (operator * 10) // operator
            high = n // (operator * 10)
            low = n % (operator)
            
            # 根据当前位的3种情况，进行计数
            if curr == 1:
                count += high * operator + low + 1
            if curr == 0:
                count += high * operator
            if curr > 1:
                count += (high+1) * operator
            
            operator *= 10
        
        return count
