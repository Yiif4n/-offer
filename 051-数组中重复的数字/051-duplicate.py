# -*- coding:utf-8 -*-
class Solution:
    # 这里要特别注意~找到任意重复的一个值并赋值到duplication[0]
    # 函数返回True/False
    def duplicate(self, numbers, duplication):
        # write code here
        for i in numbers:
            if i>=len(numbers):
                return False
        for i in range(len(numbers)):
            while numbers[i]!=i:
                if numbers[i]==numbers[numbers[i]]:
                    duplication[0]=numbers[i]
                    return True
                numbers[numbers[i]],numbers[i]=numbers[i],numbers[numbers[i]]
        return False
