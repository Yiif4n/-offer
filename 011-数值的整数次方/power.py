# -*- coding:utf-8 -*-
class Solution:
    def Power(self, base, exponent):
        # write code here
        if exponent<=2:
            return base**exponent
        ans=1
        div,mod=divmod(exponent,2)
        if mod==1:
            ans=ans*base
        temp=self.Power(base,div)
        return temp*temp*ans
            
