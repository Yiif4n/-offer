/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot)
    {
        if(pRoot==nullptr){
            return true;
        }
        return subTree(pRoot->left,pRoot->right);
    }
    bool subTree(TreeNode* rleft,TreeNode* rright){
        if(rleft==nullptr && rright==nullptr){
            return true;
        }
        if(rleft != nullptr && rright!=nullptr && rleft->val==rright->val){
            return subTree(rleft->right,rright->left) && subTree(rleft->left,rright->right);
        }
        return false;
    }

};
