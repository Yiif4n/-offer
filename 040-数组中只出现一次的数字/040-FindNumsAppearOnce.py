# -*- coding:utf-8 -*-
class Solution:
    # 返回[a,b] 其中ab是出现一次的两个数字
    def FindNumsAppearOnce(self, array):
        # write code here
        ans=0
        for val in array:
            ans^=val
        idx=0
        while ans&1!=1:
            ans=ans>>1
            idx+=1
        val1=0
        val2=0
        for val in array:
            temp=val>>idx
            if temp&1==1:
                val1^=val
            else:
                val2^=val
        return [val1,val2]
