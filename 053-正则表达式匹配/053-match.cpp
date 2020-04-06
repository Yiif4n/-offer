# -*- coding:utf-8 -*-
class Solution:
    # s, pattern都是字符串
    def match(self, s, pattern):
        # write code here
        dp=[[False for _ in range(len(pattern)+1)] for _ in range(len(s)+1)]
        dp[0][0]=True
        for i in range(1,len(s)+1):
            dp[i][0]=False
        for i in range(2,len(pattern)+1):
            dp[0][i]= (pattern[i-1]=='*') and dp[0][i-2]
        for i in range(1,len(s)+1):
            for j in range(1,len(pattern)+1):
                if pattern[j-1]!='*':
                    dp[i][j]=dp[i-1][j-1] and (s[i-1]==pattern[j-1] or '.'==pattern[j-1])
                else:
                    dp[i][j]= dp[i][j-2] or (s[i-1]==pattern[j-2] or '.'==pattern[j-2]) and dp[i-1][j]
        return dp[-1][-1]
