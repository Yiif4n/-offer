# -*- coding:utf-8 -*-
class Solution:
    # s字符串
    def isNumeric(self, s):
        # write code here
        if s is None:
            return False
        if s[0]=='+' or s[0]=='-':
            s=s[1:]
        s=self.decimal(s)
        if s :
            if s[0] =='.':
                s=self.decimal(s[1:])
                if s :
                    if (s[0]=='e' or s[0]=='E'):
                        return self.IsExponential(s)
                    else:
                        return False
            elif s[0]=='e' or s[0]=='E':
                return self.IsExponential(s)
            else:
                return False
        return True
    def decimal(self,s):
        for idx,i in enumerate(s):
            if i>'9' or i<'0':
                return s[idx:]
        return []
    def IsExponential(self,s):
        if s[0]!='e' and s[0]!='E':
            return False
        s=s[1:]
        if s and (s[0]=='-' or s[0]=='+'):
            s=s[1:]
        if s:
            s=self.decimal(s)
        else:
            return False
        return False if s else True
        
