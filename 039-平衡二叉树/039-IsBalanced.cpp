class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        if(pRoot==nullptr){
            return true;
        }
        return balance(pRoot)>0;
    }
    int balance(TreeNode* pRoot){
        if(pRoot==nullptr){
            return 0;
        }
        int left=balance(pRoot->left);
        int right=balance(pRoot->right);
        if(left==-1||right==-1){
            return -1;
        }
        if(abs(left-right)<=1){
            return max(left,right)+1;
        }
        else{
            return -1;
        }
    }
};
