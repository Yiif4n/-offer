class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead==nullptr){
            return nullptr;
        }
        ListNode* prior=pHead;
        ListNode* rear=pHead->next;
        prior->next=nullptr;
        ListNode* p=nullptr;
        while(rear){
            p=rear;
            rear=rear->next;
            p->next=prior;
            prior=p;
        }
        return prior;
    }
};
