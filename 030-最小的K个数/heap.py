# -*- coding:utf-8 -*-
class Solution:
    def GetLeastNumbers_Solution(self, tinput, k):
        # write code here
        if k>len(tinput) or k==0:
            return []
        import heapq
        klist=[-i for i in tinput[:k]]
        heapq.heapify(klist)
        for i in tinput[k:]:
            if i >= -klist[0]:
                continue 
            else:
                heapq.heappop(klist)
                heapq.heappush(klist,-i)
        return sorted([-i for i in klist])
