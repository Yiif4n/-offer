# -*- coding:utf-8 -*-
class Solution:
    # 返回对应char
    def __init__(self):
        self.count=[]
    def FirstAppearingOnce(self):
        # write code here
        return self.count[0] if self.count else '#'
    def Insert(self, char):
        # write code here
        if char not in self.count:
            self.count.append(char)
        else:
            self.count.remove(char)
