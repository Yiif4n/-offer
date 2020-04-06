# -*- coding:utf-8 -*-
class Solution:
    def VerifySquenceOfBST(self, sequence):
        # write code here
        if len(sequence)==0:
            return False
        return self.verify(sequence)
    def verify(self,sequence):
        if len(sequence)<=1:
            return True
        idx=-1
        for i,val in enumerate(sequence[:-1]):
            if val >sequence[-1]:
                idx=i
                break
        if idx==-1:
            return True
        for i in range(idx,len(sequence)-1):
            if sequence[i]<sequence[-1]:
                return False
        return self.verify(sequence[:idx]) and self.verify(sequence[idx:-1])
