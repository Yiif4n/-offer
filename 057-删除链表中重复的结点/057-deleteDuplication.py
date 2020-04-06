# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
class Solution:
    def deleteDuplication(self, pHead):
        # write code here
        first=ListNode(-1)
        first.next=pHead
        last=first
        prior=pHead
        while prior and prior.next :
            if prior.next.val==prior.val:
                val=prior.val
                while prior is not None and prior.val==val:
                    prior=prior.next
                last.next=prior
            else:
                last=prior
                prior=prior.next
        return first.next
