class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;
        printlist(head,res);
        return res;
    }
    void printlist(ListNode* head,vector<int> &res){
        if(head!=nullptr){
            printlist(head->next,res);
            res.push_back(head->val);
        }
    }
};
