# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
class Solution:
    def EntryNodeOfLoop(self, pHead):
        # write code here
        if pHead is None or pHead.next is None:
            return None
        slow,fast=pHead,pHead.next
        while slow!=fast:
            if fast is None or fast.next is None:
                return None
            slow,fast=slow.next,fast.next.next
        slow=pHead
        fast=fast.next
        while slow!=fast: 
            slow,fast=slow.next,fast.next
        return slow
