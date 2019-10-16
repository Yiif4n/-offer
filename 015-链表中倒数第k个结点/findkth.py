# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def FindKthToTail(self, head, k):
        # write code here
        prior=head
        while k and prior is not None:
            prior=prior.next
            k-=1
        if k!=0:
            return None
        ans=head
        while prior:
            prior=prior.next
            ans=ans.next
        return ans
