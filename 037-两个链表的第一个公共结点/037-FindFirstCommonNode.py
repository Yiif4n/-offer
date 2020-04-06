# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
class Solution:
    def FindFirstCommonNode(self, headA, headB):
        # write code here
        if headA is None or headB is None:
            return None
        aprior=headA
        bprior=headB
        while aprior != bprior:
            aprior=headB if aprior is None else aprior.next
            bprior=headA if bprior is None else bprior.next
        return aprior
