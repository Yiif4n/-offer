/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if (pRoot2==nullptr){
            return false;
        }
        if (pRoot2!=nullptr && pRoot1==nullptr){
            return false;
        }
        bool tag=false;
        if(pRoot1->val==pRoot2->val){
            tag=issubtree(pRoot1,pRoot2);
        }
        if(!tag){
            tag=HasSubtree(pRoot1->left,pRoot2);
            if(!tag){
                tag=HasSubtree(pRoot1->right,pRoot2);
            }
        }
        return tag;
    }
    bool issubtree(TreeNode* pRoot1, TreeNode* pRoot2){
        if (pRoot2==nullptr){
            return true;
        }
        if (pRoot2!=nullptr && pRoot1==nullptr){
            return false;
        }
        if(pRoot1->val==pRoot2->val){
            return issubtree(pRoot1->left,pRoot2->left) && issubtree(pRoot1->right,pRoot2->right);
        }
        return false;
    }
};
