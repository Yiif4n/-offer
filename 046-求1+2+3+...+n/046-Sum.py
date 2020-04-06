# -*- coding:utf-8 -*-
class Solution:
    def Sum_Solution(self, n):
        # write code here
        ans = (n>0) and n
        return ans and self.Sum_Solution(n-1)+ans
