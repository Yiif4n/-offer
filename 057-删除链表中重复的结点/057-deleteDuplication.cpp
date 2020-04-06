/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        ListNode* first=new ListNode(-1);
        first->next=pHead;
        ListNode* last=first;
        ListNode* p=pHead;
        while( p!=nullptr and p->next!=nullptr){
            if (p->next->val==p->val){
                int val=p->val;
                while(p!=nullptr and p->val==val){
                    p=p->next;
                }
                last->next=p;
                
            }
            else{
                last=p;
                p=p->next;
            }
        }
        return first->next;
    }
};
