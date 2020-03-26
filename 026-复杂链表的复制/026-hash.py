# -*- coding:utf-8 -*-
# class RandomListNode:
#     def __init__(self, x):
#         self.label = x
#         self.next = None
#         self.random = None
class Solution:
    # 返回 RandomListNode
    def Clone(self, pHead):
        # write code here
        if pHead is None:
            return None
        c_head,mapping=self.clone_node(pHead)
        return self.connected_sibling_nodes(pHead,c_head,mapping)
    def clone_node(self,pHead):
        if pHead is None:
            return None
        mapping={}
        c_head=RandomListNode(pHead.label)
        c_cur=c_head
        cur=pHead
        mapping[cur]=c_cur
        while cur:
            if cur.next:
                c_next=RandomListNode(cur.next.label)
                mapping[cur.next]=c_next
                c_cur.next=c_next
                c_cur=c_next
                cur=cur.next
            else:
                break
        return c_head,mapping
    def connected_sibling_nodes(self,head,c_head,mapping):
        if head is None or c_head is None:
            return None
        cur=head
        c_cur=c_head
        while cur:
            if cur.random:
                c_cur.random=mapping[cur.random]
            cur=cur.next
            c_cur=c_cur.next
        return c_head
