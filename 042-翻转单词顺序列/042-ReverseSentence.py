# -*- coding:utf-8 -*-
class Solution:
    def ReverseSentence(self, s):
        # write code here
        words=s.split(' ')
        return ' '.join(words[::-1])
