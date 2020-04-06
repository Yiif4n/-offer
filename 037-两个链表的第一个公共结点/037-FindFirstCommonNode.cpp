/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        if (pHead1 ==nullptr || pHead2==nullptr){
            return NULL;
        }
        ListNode* ap=pHead1;
        ListNode* bp=pHead2;
        while(ap!=bp){
            ap= ap==nullptr?pHead2:ap->next;
            bp= bp==nullptr?pHead1:bp->next;
        }
        return ap;
    }
};
