# -*- coding:utf-8 -*-
class Solution:
    def FirstNotRepeatingChar(self, s):
        # write code here
        from collections import OrderedDict
        pool=OrderedDict()
        for val in s:
            if val in pool:
                pool[val]+=1
            else:
                pool[val]=1
        for idx,val in enumerate(s):
            if pool[val]==1:
                return idx
        return -1
