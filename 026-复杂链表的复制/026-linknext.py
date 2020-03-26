# -*- coding:utf-8 -*-
# class RandomListNode:
#     def __init__(self, x):
#         self.label = x
#         self.next = None
#         self.random = None
class Solution:
    # 返回 RandomListNode
    def Clone(self, pHead):
        if pHead is None:
            return None
        cur=pHead
        while cur:
            node=RandomListNode(cur.label)
            cur.next,node.next=node,cur.next
            cur=node.next
        cur=pHead
        while cur:
            if cur.random:
                cur.next.random=cur.random.next
            cur=cur.next.next
        c_head=pHead.next
        c_cur=c_head
        cur=pHead
        while cur:
            cur.next=c_cur.next
            cur=c_cur.next
            if c_cur.next is None:
                break
            c_cur.next=cur.next
            c_cur=cur.next
        return c_head
