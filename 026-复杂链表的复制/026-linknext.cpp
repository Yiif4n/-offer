/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if(pHead==nullptr){
            return nullptr;
        }
        RandomListNode* cur=pHead;
        while(cur!=nullptr){
            RandomListNode* node=new RandomListNode(cur->label);
            node->next=cur->next;
            cur->next=node;
            cur=node->next;
        }
        cur=pHead;
        while(cur!=nullptr){
            if(cur->random!=nullptr){
                cur->next->random=cur->random->next;
            }
            cur=cur->next->next;
        }
        RandomListNode* c_head=pHead->next;
        RandomListNode* c_cur=c_head;
        cur=pHead;
        while(cur!=nullptr){
            cur->next=c_cur->next;
            cur=cur->next;
            if(c_cur->next==nullptr){
                break;
            }
            c_cur->next=cur->next;
            c_cur=c_cur->next;
        }
        return c_head;
    }
};
