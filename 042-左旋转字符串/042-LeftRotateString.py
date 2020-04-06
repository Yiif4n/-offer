# -*- coding:utf-8 -*-
class Solution:
    def LeftRotateString(self, s, n):
        # write code here
        #return s[n:]+s[:n]
        ans=[0]*len(s)
        for i in range(len(s)):
            ans[i]=s[(i+n)%len(s)]
        return ''.join(ans)
