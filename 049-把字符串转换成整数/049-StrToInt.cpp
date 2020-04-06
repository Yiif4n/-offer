# -*- coding:utf-8 -*-
class Solution:
    def StrToInt(self, s):
        # write code here
        if s=='':
            return 0
        s=s.strip()
        valid={'0':0,'1':1,'2':2,'3':3,'4':4,'5':5,'6':6,'7':7,'8':8,'9':9}
        minus=False
        if s[0]=='+':
            s=s[1:]
        elif s[0]=='-':
            minus=True
            s=s[1:]
        elif s[0] not in valid:
            return 0
        ans=0
        for char in s:
            if char in valid:
                ans*=10
                ans+=valid[char]
            else:
                return 0
        if minus:
            ans= -ans
        if -2147483648<=ans <=2147483647:
            return ans
        else:
            return 0
