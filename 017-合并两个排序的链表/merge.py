# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
class Solution:
    # 返回合并后列表
    def Merge(self, pHead1, pHead2):
        # write code here
        if pHead1 is None:
            return pHead2
        if pHead2 is None:
            return pHead1
        if pHead1.val >=pHead2.val:
            head,pHead2=pHead2,pHead2.next
        else:
            head,pHead1=pHead1,pHead1.next
        front=head
        while pHead1 is not None and pHead2 is not None:
            if pHead1.val >=pHead2.val:
                front.next=pHead2
                pHead2=pHead2.next
            else:
                front.next=pHead1
                pHead1=pHead1.next
            front=front.next
        while pHead1 is not None:
            front.next,pHead1=pHead1,pHead1.next
            front=front.next
        while pHead2 is not None:
            front.next,pHead2=pHead2,pHead2.next
            front=front.next
        return head
