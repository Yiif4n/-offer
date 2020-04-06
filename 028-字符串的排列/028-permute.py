# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        self.ans=[]
    def Permutation(self, string):
        # write code here
        if not string:
            return []
        else:
            self.permute(string,0)
            return sorted(self.ans)
    def permute(self,string,begin):
        if begin==len(string)-1:
            self.ans.append(string)
        else:
            duplicate=set()
            for i in range(begin,len(string)):
                if string[i] not in duplicate:
                    duplicate.add(string[i])
                    newstr=string
                    if i!=begin:
                        newstr=string[:begin]+string[i]+string[begin+1:i]+string[begin]+string[i+1:]
                    self.permute(newstr,begin+1)
                    
