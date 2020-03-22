class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        ListNode* prior=pListHead;
        while(k!=0 && prior!=nullptr){
            prior=prior->next;
            k--;
        }
        if (k>0){
            return nullptr;
        }
        ListNode* ans=pListHead;
        while(prior!=nullptr){
            ans=ans->next;
            prior=prior->next;
        }
        return ans;
    
    }
};
