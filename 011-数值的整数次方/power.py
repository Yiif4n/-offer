# -*- coding:utf-8 -*-
class Solution:
    def Power(self, base, exponent):

        ex=exponent
        if exponent<0:
            ex=-exponent
        ans=self.ksm(base,ex)
        if exponent<0:
            return 1/ans
        return ans
    def ksm(self,base,exponent):
        ans=1
        while(exponent):
            if exponent & 1==1:
                ans=ans*base
            base=base*base
            exponent>>=1
        return ans
