# -*- coding:utf-8 -*-
class Solution:
    def FindGreatestSumOfSubArray(self, array):
        # write code here
        dp=[0]*len(array)
        dp[0]=array[0]
        ans=float('-inf')
        for i in range(1,len(array)):
            dp[i]=max(dp[i-1]+array[i],array[i])
            ans=max(ans,dp[i])
        return ans
